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

// массивы указателей на функции сортировки
void (*sortFuncs[NumSortFuncs])(double*, int) = {
    bubbleSort,
    insertSort,
    selectionSort,
    // mergeSortWrapper
};

void (*sortFuncsMQ[NumSortFuncsMQ])(double*, int, int) = {
    mergeSort,
    mergeSortInPlace,
    quickSortL,
    quickSortH
};

// массивы строк-названий функций сортировок
const char * sortFuncNames[NumSortFuncs] = {
    "Bubble Sort",
    "Insertion Sort",
    "Selection Sort",
    // "MergeSort"
    // тут враппер у мержа (с враппером дольше)
};

const char * sortFuncNamesMQ[NumSortFuncsMQ] = {
    "Merge Sort",
    "Merge Sort in-place",
    "Quick Lomuto",
    "Quick Hoara"
};

int main() {

    int n = 100000;

    printf("array lenght is %d\n", n);

    for (int i = 0; i < NumSortFuncs; i++) {
        printf("Testing sort function - %s:\n", sortFuncNames[i]);
        for (int j = 0; j < NumOrder; j++) {
            test(sortFuncs[i], n, static_cast<Order>(j));
        }
    }

    for (int i = 0; i < NumSortFuncsMQ; i++) {
        printf("Testing sort function - %s:\n", sortFuncNamesMQ[i]);
        for (int j = 0; j < NumOrder; j++) {
            test(sortFuncsMQ[i  ], n, static_cast<Order>(j));
        }
    }

    return 0;
}



