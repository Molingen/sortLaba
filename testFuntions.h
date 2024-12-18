#pragma once

// перечисление возможных состояний массивов
typedef enum {
    Direct,
    Inverse,
    Random
} Order;

void test(void (*sortFunc)(double*, int), int n, Order order);

void test(void (*sortFunc)(double*, int, int), int n, Order order);

void test(void (*sortFunc)(int*, int), int n, Order order);