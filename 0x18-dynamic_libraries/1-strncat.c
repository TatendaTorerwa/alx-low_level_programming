#include "main.h"

/**
*_strncat - concatenates two strings
*
*@dest: pointer
*
*@src: pointer
*
*@n: integer arg
*
*Description: "concatenates two strings"
*
*Return: pointer
*/

char *_strncat(char *dest, char *src, int n)

{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)

	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
