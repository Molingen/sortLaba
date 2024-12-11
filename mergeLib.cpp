#include <stdlib.h>
#include "mergeLib.h"



void merge(double * arr, int left, int middle, int right) {

    int leftLength = middle - left + 1;
    int rightLength = right - middle;

    double * leftTmpArray = static_cast<double*>(malloc(leftLength * sizeof(double)));
    double * rightTmpArray = static_cast<double*>(malloc(rightLength * sizeof(double)));

    for (int i = 0; i != leftLength; ++i)
        leftTmpArray[i] = arr[left + i];

    for (int j = 0; j != rightLength; ++j)
        rightTmpArray[j] = arr[middle + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < leftLength && j < rightLength) {
        if (leftTmpArray[i] <= rightTmpArray[j]) {
            arr[k] = leftTmpArray[i];
            i++;
        }
        else {
            arr[k] = rightTmpArray[j];
            j++;
        }
        k++;
    }

    while (i < leftLength) {
        arr[k] = leftTmpArray[i];
        i++;
        k++;
    }

    while (j < rightLength) {
        arr[k] = rightTmpArray[j];
        j++;
        k++;
    }

    free(leftTmpArray);
    free(rightTmpArray);
}



void mergeSort(double * arr, int left, int right) {

    if (left < right) {
        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}



// void mergeSortWrapper(double *arr, int n) {
//     int left = 0, right = n - 1;
//     mergeSort(arr, left, right);
// }



void mergeInPlace(double * arr, int left, int middle, int right) {

    int start2 = middle + 1;

    if (arr[middle] <= arr[start2]) {
        return;
    }

    while (left <= middle && start2 <= right) {
        if (arr[left] <= arr[start2]) {
            left++;
        }
        else {
            double value = arr[start2];
            int index = start2;

            while (index > left && arr[index - 1] > value) {
                arr[index] = arr[index - 1];
                index--;
            }
            arr[index] = value;

            left++;
            middle++;
            start2++;
        }
    }
}



void mergeSortInPlace(double * arr, int left, int right) {

    if (left < right) {
        int middle = left + (right - left) / 2;

        mergeSortInPlace(arr, left, middle);
        mergeSortInPlace(arr, middle + 1, right);

        mergeInPlace(arr, left, middle, right);
    }
}

