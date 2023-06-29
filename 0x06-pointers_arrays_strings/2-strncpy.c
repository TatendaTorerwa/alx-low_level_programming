#include "main.h"

/**
*_strncpy - copies a string
*
*@dest: pointer
*
*@src: pointer
*
*@n: integer arg
*
*Description: "copies a string"
*
*Return: pointer
*/

char *_strncpy(char *dest, char *src, int n)
{

	int r;
	for (r = 0; r < n && src[r] != '\0'; r++)
	{
		dest[r] = src[r];
	}
	for (; r < n; r++)
	{
		dest[r] = '\0';
	}

	return (dest);
}
