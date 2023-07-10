#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
*str_concat - concatenates two strings
*
*@s1: pointer string
*
*s2: pointer string
*
*Description: "concatenates two strings"
*
*Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int m = 0, n = 0;
	int i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[m] != '\0')
	{
		m++;
	}
	while (s2[n] != '\0')
	{
		n++;
	}

	ptr = malloc(sizeof(char) * (m + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < m; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}

	ptr[i + j] = '\0';


	return (ptr);
}
