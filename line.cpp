#include "line.h"
#include <string.h>
#include <stdlib.h>
#include <limits.h>


void countingSort(int* arr, int size) {
    int maxElem = -1e5;
    int minElem = 1e5;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > maxElem) {
            maxElem = arr[i];
        }
        if (arr[i] < minElem) {
            minElem = arr[i];
        }
    }

    int range = maxElem - minElem + 1;

    int* countArray = static_cast<int*>(calloc(range, sizeof(int)));

    for (int i = 0; i != size; ++i) {
        ++countArray[arr[i] - minElem];
    }


    int index = 0;
    for (int i = 0; i < range; ++i) {
        while (countArray[i] > 0) {
            arr[index++] = minElem + i;
            --countArray[i];
        }
    }

    free(countArray);
}