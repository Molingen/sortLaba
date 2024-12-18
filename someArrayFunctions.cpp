#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#include "someArrayFunctions.h"


void printArr(double * arr, int n) {
    for (int i = 0; i != n; ++i) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");
}

void printArr(int * arr, int n) {
    for (int i = 0; i != n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void generateRandomArr(double * arr, int n) {

    srandom(time(NULL));

    for (int i = 0; i != n; ++i) {
        arr[i] = static_cast<double>(random()) / RAND_MAX * 10000.0;
    }
}

void generateRandomArr(int *arr, int n) {

    srandom(time(NULL));

    for (int i = 0; i != n; ++i) {
        arr[i] =  random() % 100000 + 1;
    }
}


void generateDirectArr(double * arr, int n) {
    srandom(time(NULL));

    for (int i = 0; i < n; i++) {
        arr[i] = i + static_cast<double>(random()) / RAND_MAX;
    }
}

void generateDirectArr(int * arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
}


void generateInverseArr(double * arr, int n) {
    srandom(time(NULL));

    for (int i = 0; i < n; i++) {
        arr[i] = n - i - 1 + static_cast<double>(random()) / RAND_MAX;
    }
}

void generateInverseArr(int * arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = n - i - 1;
    }
}
