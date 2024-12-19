#include <stdlib.h>
#include<bits/stdc++.h>

#include "mergeLib.h"
#include "sortingLib.h"



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
            ++i;
        }
        else {
            arr[k] = rightTmpArray[j];
            ++j;
        }
        ++k;
    }

    while (i < leftLength) {
        arr[k] = leftTmpArray[i];
        ++i;
        ++k;
    }

    while (j < rightLength) {
        arr[k] = rightTmpArray[j];
        ++j;
        ++k;
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



void mergeInPlace(double * arr, int start, int middle, int end) {
    int len = end - start + 1;

    int h = ceil(len / 2.0);

    while(h >= 1) {
        int idx = start;
        while(idx + h <= end) {
            if(arr[idx] > arr[idx + h]) {
                swap(&arr[idx], &arr[idx + h]);
            }
            ++idx;
        }
        if(h == 1) {
            break;
        }
        h = ceil(h / 2.0);
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


