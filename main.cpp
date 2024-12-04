#include <complex.h>
#include <stdio.h>

#include "sortingLib.h"
#include "someArrayFunctions.h"
#include "testFuntions.h"
#include "mergeLib.h"


// массив указателей на функции создания массивов
void (*arrayFuncs[NumOrder])(double*, int) = {
    generateDirectArr,
    generateInverseArr,
    generateRandomArr
};

// массив указателей на функции сортировки
void (*sortFuncs[NumSortFuncs])(double*, int) = {
    bubbleSort,
    insertSort,
    selectionSort,
    // mergeSortWrapper
};

void (*sortFuncsMQ[NumSortFuncsMMQ])(double*, int, int) = {
    mergeSort,
    mergeSortInPlace
};

// массив строк-названий функций сортировок
const char * sortFuncNames[NumSortFuncs] = {
    "Bubble Sort",
    "Insertion Sort",
    "Selection Sort",
    // "MergeSort"
};

const char * sortFuncNamesMQ[NumSortFuncsMMQ] = {
    "Merge Sorting",
    "Merge Sorting in-place"
};

int main() {

    int n = 100000;

    printf("array lenght is %d\n", n);

    for (int i = 0; i < NumSortFuncs; i++) {
        printf("Testing sort function - %s:\n", sortFuncNames[i]);
        for (int j = 0; j < NumOrder; j++) {
            test(sortFuncs[i], n, (Order)j);
        }
    }

    for (int i = 0; i < NumSortFuncsMMQ; i++) {
        printf("Testing sort function - %s:\n", sortFuncNamesMQ[i]);
        for (int j = 0; j < NumOrder; j++) {
            test(sortFuncsMQ[i  ], n, (Order)j);
        }
    }

    return 0;
}