#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using the Linear search algorithm.
 *
 * @array:  Pointer to the first element of the array to search.
 *
 * @size: Number of elements in array.
 *
 * @value:  Value to search for.
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array == NULL)
	{
		return (-1);
	}

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
		if (array[n] == value)
		{
			return (n);
		}
	}
	return (-1);
}
