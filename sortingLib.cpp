#include <stdlib.h>

#include "sortingLib.h"



void swap(double * a, double * b) {
    double tmp = *a;
    *a = *b;
    *b = tmp;
}



void bubbleSort(double * arr, int n) {
    for (int i = 0; i != n - 1; ++i) {
        for (int j = 0; j != n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}



void insertSort(double * arr, int n) {

    for (int i = 1; i != n; ++i) {

        double key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            swap(&arr[j], &arr[j + 1]);
            j--;
        }
        arr[j + 1] = key;
    }
}



void selectionSort(double * arr, int n) {

    for (int i = 0; i != n - 1; ++i) {
        int indexMin = i;
        for (int j = i + 1; j != n; ++j) {
            if (arr[j] < arr[indexMin]) {
                indexMin = j;
            }
        }
        swap(&arr[i],&arr[indexMin]);
    }
}

void merge(double * arr, int left, int middle, int right) {

    int leftLength = middle - left + 1;
    int rightLength = right - middle;

    double * leftTmpArray = (double*)malloc(leftLength * sizeof(double));
    double * rightTmpArray = (double*)malloc(rightLength * sizeof(double));

    // Copy data to leftTmpArray and rightTmpArray
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



