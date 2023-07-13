#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
*malloc_checked - allocates memory
*
*@b: number of bytes
*
*Description: "allocates memory"
*
*Return: a pointer to the allocate memory
*/

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
