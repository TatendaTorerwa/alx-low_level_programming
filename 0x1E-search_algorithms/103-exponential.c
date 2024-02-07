#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using Exponential search algorithm
 * @array: Pointer to the first element of the array to search in.
 *
 * @size: Number of elements in @array.
 *
 * @value: Value to search for.
 *
 * Return: The index where @value is located, or -1 if not found.
 */


int exponential_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = %d\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;
	high = (i < size) ? i : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_two(array, low, high, value));
}

/**
 * binary_search_two - Searches for a value in a sorted array of integers
 *                 using Binary search algorithm
 * @array: Pointer to the first element of the array to search in.
 *
 * @low: Starting index of the array.
 *
 * @high: Ending index of the array.
 *
 * @value: Value to search for.
 *
 * Return: The index where @value is located, or -1 if not found
 */

int binary_search_two(int *array, size_t low, size_t high, int value)
{
	size_t start;
	size_t end;

	if (array == NULL)
		return (-1);

	start = low;
	end = high;

	while (start <= end)
	{
		size_t mid = start + (end - start) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
