#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
*create_array - that creates an array of chars, and initializes it
*
*@size: size of an array
*
*@c: char to assign
*
*Description: "that creates an array of chars, and initializes it"
*
*Return: pointer to array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		ptr[a] = c;
	}
	return (ptr);
}
