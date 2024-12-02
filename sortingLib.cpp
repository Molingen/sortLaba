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