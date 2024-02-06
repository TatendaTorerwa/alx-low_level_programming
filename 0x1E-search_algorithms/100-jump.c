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

int binary_search(int *array, size_t size, int value)
{
	size_t n, left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)

	{
		printf("Searching in array: ");
		for (n = left; n < right; n++)
			printf("%d, ", array[n]);
		printf("%d\n", array[n]);

		n = (left + right) / 2;
		if (array[n] == value)
			return (n);
		if (array[n] > value)
			right = n - 1;
		else
			left = n + 1;
	}

	return (-1);
}
