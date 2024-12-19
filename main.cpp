#include <complex.h>
#include <string.h>

#include "sortingLib.h"
#include "testFuntions.h"
#include "mergeLib.h"
#include "line.h"



int main(int args, char ** argv) {
    if (args != 4) {
        printf("Wrong number of arguments \n");
        return -1;
    }

    int n = atoi(argv[2]);
    int i = atoi(argv[3]);

    if (i > 2) {
        printf("Wrong number of Order: 0 - Direct, 1 - Iverse, 2 - Random \n");
        return -1;
    }

    if (strcmp(argv[1], "bubble") == 0) {
        test(bubbleSort, n, static_cast<Order>(i));
        return 0;
    }
    if (strcmp(argv[1], "insert") == 0) {
        test(insertSort, n, static_cast<Order>(i));
        return 0;
    }
    if (strcmp(argv[1], "select") == 0) {
        test(selectionSort, n, static_cast<Order>(i));
        return 0;
    }
    if (strcmp(argv[1], "quickL") == 0) {
        test(quickSortL, n, static_cast<Order>(i));
        return 0;
    }
    if (strcmp(argv[1], "quickH") == 0) {
        test(quickSortH, n, static_cast<Order>(i));
        return 0;
    }
    if (strcmp(argv[1], "merge") == 0) {
        test(mergeSort, n, static_cast<Order>(i));
        return 0;
    }
    if (strcmp(argv[1], "mergeIP") == 0) {
        test(mergeSortInPlace, n, static_cast<Order>(i));
        return 0;
    }
    if (strcmp(argv[1], "counting") == 0) {
        test(countingSort, n, static_cast<Order>(i));
        return 0;
    }
    if (strcmp(argv[1], "shell") == 0) {
        test(shellSort, n, static_cast<Order>(i));
        return 0;
    }

    return 0;
}


