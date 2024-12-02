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
void (*sortFuncsBIS[NumSortFuncs])(double*, int) = {
    bubbleSort,
    insertSort,
    selectionSort
};

void (*sortFuncsMQ[NumSortFuncs])(double*, int, int) = {
    mergeSort,
    mergeSortInPlace
};

// массив строк-названий функций сортировок
const char * sortFuncNames[NumSortFuncs] = {
    "Bubble Sort",
    "Insertion Sort",
    "Selection Sort"
};

int main() {

    int n = 150000;

    printf("array lenght is %d\n", n);

    // for (int i = 0; i < NumSortFuncs; i++) {
    //     printf("Testing sort function - %s:\n", sortFuncNames[i]);
    //     for (int j = 0; j < NumOrder; j++) {
    //         test(sortFuncsBIS[i], n, (Order)j);
    //     }
    // }

    // for (int i = 0; i < NumSortFuncs; i++) {
    //     printf("Testing sort function - %s:\n", sortFuncNames[i]);
    //     test(sortFuncs[i], n, Random);
    // }


    return 0;
}