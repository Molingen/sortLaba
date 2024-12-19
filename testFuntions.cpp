#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#include "testFuntions.h"
#include "someArrayFunctions.h"


void test(void (*sortFunc)(double*, int), int n, Order order) {

    auto * arr = static_cast<double*>(malloc(n * sizeof(double)));

    switch (order) {
        case Direct: {
            generateDirectArr(arr, n);
            const clock_t start = clock();

            sortFunc(arr, n);

            const clock_t end = clock();

            const double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("%.5lf", timeSpent);
            break;
        }
        case Inverse: {
            generateInverseArr(arr, n);
            const clock_t start = clock();

            sortFunc(arr, n);

            const clock_t end = clock();

            const double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("%.5lf", timeSpent);
            break;
        }
        case Random: {
            generateRandomArr(arr, n);
            const clock_t start = clock();

            sortFunc(arr, n);

            const clock_t end = clock();

            const double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("%.5lf", timeSpent);
            break;
        }
        default:
            break;
    }

    free(arr);
}

void test(void(*sortFunc)(double*, int, int), int n, Order order) {

    auto * arr = static_cast<double*>(malloc(n * sizeof(double)));

    switch (order) {
        case Direct: {
            generateDirectArr(arr, n);

            const clock_t start = clock();

            sortFunc(arr, 0, n - 1);

            const clock_t end = clock();

            const double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("%.5lf", timeSpent);
            break;
        }
        case Inverse: {
            generateInverseArr(arr, n);

            const clock_t start = clock();

            sortFunc(arr, 0, n - 1);

            const clock_t end = clock();

            const double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("%.5lf", timeSpent);
            break;
        }
        case Random: {
            generateRandomArr(arr, n);

            const clock_t start = clock();

            sortFunc(arr,0, n - 1);

            const clock_t end = clock();

            const double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("%.5lf", timeSpent);
            break;
        }
        default:
            break;
    }

    free(arr);
}

void test(void (*sortFunc)(int*, int), int n, Order order) {

    auto * arr = static_cast<int*>(malloc(n * sizeof(int)));

    switch (order) {
        case Direct: {
            generateDirectArr(arr, n);
            const clock_t start = clock();

            sortFunc(arr, n);

            const clock_t end = clock();

            const double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("%.5lf", timeSpent);
            break;
        }
        case Inverse: {
            generateInverseArr(arr, n);
            const clock_t start = clock();

            sortFunc(arr, n);

            const clock_t end = clock();

            const double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("%.5lf", timeSpent);
            break;
        }
        case Random: {
            generateRandomArr(arr, n);
            const clock_t start = clock();

            sortFunc(arr, n);

            const clock_t end = clock();

            const double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("%.5lf", timeSpent);
            break;
        }
        default:
            break;
    }

    free(arr);
}