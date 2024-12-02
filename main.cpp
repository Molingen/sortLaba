#include <stdio.h>

#include "sortingLib.h"
#include "someArrayFunctions.h"
#include "testFuntions.h"


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
    selectionSort
};

// массив строк-названий функций сортировок
const char * sortFuncNames[NumSortFuncs] = {
    "Bubble Sort",
    "Insertion Sort",
    "Selection Sort"
};

int main() {

    int n = 10000;

    printf("array lenght is %d\n", n);

    for (int i = 0; i < NumSortFuncs; i++) {
        printf("Testing sort function - %s:\n", sortFuncNames[i]);
        for (int j = 0; j < NumOrder; j++) {
            test(sortFuncs[i], n, (Order)j);
        }
    }

    // for (int i = 0; i < NumSortFuncs; i++) {
    //     printf("Testing sort function - %s:\n", sortFuncNames[i]);
    //     test(sortFuncs[i], n, Random);
    // }

    return 0;
}