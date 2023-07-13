#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*_realloc -  reallocates a memory block
*
*@ptr: pointer to the memory previsouly allocated by malloc
*
*@old_size: size of the allocated memory for ptr
*
*@new_size: new size of the new memory block
*
*Description: "reallocates a memory block"
*
*Return: pointer to the newly allocated memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int m;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (m = 0; m < new_size; m++)
		{
			ptr1[m] = old_ptr[m];
		}
	}
	if (new_size > old_size)
	{
		for (m = 0; m < old_size; m++)
		{
			ptr1[m] = old_ptr[m];
		}
	}
	free(ptr);
	return (ptr1);
}
