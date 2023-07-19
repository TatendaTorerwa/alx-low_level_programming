#include "function_pointers.h"
#include <stdio.h>

/**
*array_iterator - executes a function given as a parameter
*
*@array: the array
*
*@size: number of elements
*
*@action: pointer to print in regular
*
*Description: "executes a function given as a parameter"
*
*Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int m;

	if (array == NULL || action == NULL)
		return;

	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}
}
