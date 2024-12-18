#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#include "testFuntions.h"
#include "someArrayFunctions.h"


void test(void (*sortFunc)(double*, int), int n, Order order) {

    double* arr = static_cast<double*>(malloc(n * sizeof(double)));

    switch (order) {
        case Direct: {
            generateDirectArr(arr, n);
            const clock_t start = clock();

            sortFunc(arr, n);

            const clock_t end = clock();

            double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("The sorting time in a sorted array is %.5lf seconds\n", timeSpent);
            // printArr(arr, n);
            break;
        }
        case Inverse: {
            generateInverseArr(arr, n);
            const clock_t start = clock();

            sortFunc(arr, n);

            const clock_t end = clock();

            double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("The sorting time in a reverse sorted array is %.5lf seconds\n", timeSpent);
            // printArr(arr, n);
            break;
        }
        case Random: {
            generateRandomArr(arr, n);
            const clock_t start = clock();

            sortFunc(arr, n);

            const clock_t end = clock();

            double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("The sorting time in an array of random numbers is %.5lf seconds\n", timeSpent);
            // printArr(arr, n);
            break;
        }
        default:
            break;
    }

    free(arr);
}

void test(void(*sortFunc)(double*, int, int), int n, Order order) {

    double* arr = static_cast<double*>(malloc(n * sizeof(double)));

    switch (order) {
        case Direct: {
            generateDirectArr(arr, n);

            const clock_t start = clock();

            sortFunc(arr, 0, n - 1);

            const clock_t end = clock();

            double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("The sorting time in a sorted array is %.5lf seconds\n", timeSpent);
            // printArr(arr, n);
            break;
        }
        case Inverse: {
            generateInverseArr(arr, n);

            const clock_t start = clock();

            sortFunc(arr, 0, n - 1);

            const clock_t end = clock();

            double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("The sorting time in a reverse sorted array is %.5lf seconds\n", timeSpent);
            // printArr(arr, n);
            break;
        }
        case Random: {
            generateRandomArr(arr, n);

            const clock_t start = clock();

            sortFunc(arr,0, n - 1);

            const clock_t end = clock();

            double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("The sorting time in an array of random numbers is %.5lf seconds\n", timeSpent);
            // printArr(arr, n);
            break;
        }
        default:
            break;
    }

    free(arr);
}

void test(void (*sortFunc)(int*, int), int n, Order order) {

    int * arr = static_cast<int*>(malloc(n * sizeof(int)));

    switch (order) {
        case Direct: {
            generateDirectArr(arr, n);
            const clock_t start = clock();

            sortFunc(arr, n);

            const clock_t end = clock();

            double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("The sorting time in a sorted array is %.5lf seconds\n", timeSpent);
            // printArr(arr, n);
            break;
        }
        case Inverse: {
            generateInverseArr(arr, n);
            const clock_t start = clock();

            sortFunc(arr, n);

            const clock_t end = clock();

            double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("The sorting time in a reverse sorted array is %.5lf seconds\n", timeSpent);
            // printArr(arr, n);
            break;
        }
        case Random: {
            generateRandomArr(arr, n);
            const clock_t start = clock();

            sortFunc(arr, n);

            const clock_t end = clock();

            double timeSpent = static_cast<double>(end - start)/CLOCKS_PER_SEC;
            printf("The sorting time in an array of random numbers is %.5lf seconds\n", timeSpent);
            // printArr(arr, n);
            break;
        }
        default:
            break;
    }

    free(arr);
}