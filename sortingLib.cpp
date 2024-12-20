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
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}



void selectionSort(double * arr, int n) {
    for (int i = 0; i != n - 1; ++i) {
        int indexMin = i;
        for (int j = i + 1; j != n; ++j) {
            if (arr[indexMin] > arr[j]) {
                indexMin = j;
            }
        }
        if (indexMin != i) {
            swap(&arr[i],&arr[indexMin]);
        }
    }
}


// выясниить сложноть
void shellSort(double * arr, int n) {
    for (int gap = n/2; gap > 0; gap /= 2) {
        for (int i = gap; i != n; ++i) {

            double temp = arr[i];

            int j = i;
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }

            arr[j] = temp;
        }
    }
}



int partitionLomuto(double * arr, int left, int right) {
    double pivot = arr[right];
    int i = left - 1;

    for (int j = left; j != right; ++j) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[right]);

    return i + 1;
}



void quickSortL(double *arr, int left, int right) {
    while (left < right) {
        int q = partitionLomuto(arr, left, right);
        if (q - left < right - q) {
            quickSortL(arr, left, q - 1);
            left = q + 1;
        }
        else {
            quickSortL(arr, q + 1, right);
            right = q - 1;
        }
    }
}



int partitionHoare(double * arr, int left, int right) {
    double pivot = arr[left];
    int i = left - 1;
    int j = right + 1;

    while (true) {
        while (arr[++i] < pivot) {}
        while (arr[--j] > pivot) {}

        if (i >= j) {
            return j;
        }

        swap(&arr[i], &arr[j]);
    }
}



void quickSortH(double *arr, int left, int right) {
    while (left < right) {
        int q = partitionHoare(arr, left, right);
        if (q - left < right - q) {
            quickSortH(arr, left, q - 1);
            left = q + 1;
        }
        else {
            quickSortH(arr, q + 1, right);
            right = q - 1;
        }
    }
}