#pragma once

// перечисление возможных состояний массивов
typedef enum {
    Direct,
    Inverse,
    Random,
    NumOrder
} Order;

// перечисление сортировок
typedef enum {
    BubbleSort,
    SelectSort,
    InsertSort,
    // MergeSortWrapper,
    NumSortFuncs
} SortFuncsEnum1;

typedef enum {
    MergeSort,
    MergeSortInPlace,
    QuickSortL,
    QuickSortH,
    NumSortFuncsMQ
} SortFuncsEnum2;

void test(void (*sortFunc)(double*, int), int n, Order order);

void test(void (*sortFunc)(double*, int, int), int n, Order order);