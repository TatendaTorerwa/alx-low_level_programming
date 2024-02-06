#include "search_algos.h"

/**
 *  binary_search - Searches for a value using the Binary search algorithm.
 *
 *  @array: Array to search.
 *
 *  @size: Number of elements in array.
 *
 *  @value:  Value to search.
 *
 *  Return: Always EXIT_SUCCESS
 */

int jump_search(int *array, size_t size, int value) {
    int jump, low, i;

    if (array == NULL || size == 0)
        return -1;

    jump = (int)sqrt(size);
    low = 0;

    printf("Value checked array[%d] = [%d]\n", low, array[low]);
    for (i = 0; i < (int)size; i += jump) {
        if (array[i] == value) {
            printf("Value checked array[%d] = [%d]\n", i, array[i]);
            return i;
        }
        if (array[i] < value) {
            low = i;
        }
        if (array[i] > value) {
            printf("Value found between indexes [%d] and [%d]\n", low, i);
            break;
        }
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
    }

    for (i = low; i < (int)size; i++) {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}
