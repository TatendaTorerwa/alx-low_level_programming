#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value) {
    int jump, low, i;

    if (array == NULL || size == 0)
        return -1;

    jump = (int) sqrt(size);
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
