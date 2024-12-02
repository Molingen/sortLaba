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
    NumSortFuncs
} SortFuncsEnum;

void test(void (*sortFunc)(double*, int), int n, Order order);