#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*array_range - creates an array of integers
*
*@min: minimum range of values stored
*
*@max: maximum range of values and number of elements
*
*Description: "creates an array of integers"
*
*Return: pointer
*/

int *array_range(int min, int max)
{
	int *str;
	int m, size = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	str = malloc(sizeof(int) * size);

	if (str == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
	{
		str[m] = min++;
	}
	return (str);
}
