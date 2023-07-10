#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
*_strdup -  duplicate to new memory space location
*
*@str: char pointer
*
*Description: "duplicate to new memory space location"
*
*Return: pointer
*/

char *_strdup(char *str)
{
	int m = 0, n;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[m] != '\0')
	{
		m++;
	}

	ptr = malloc(sizeof(char) * (m + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < m; n++)
	{
		ptr[n] = str[n];
	}

	return (ptr);

	free(ptr);
}
