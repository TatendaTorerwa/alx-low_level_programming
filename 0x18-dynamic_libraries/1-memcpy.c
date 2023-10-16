#include "main.h"

/**
*_memcpy - copies memory area
*
*@dest: pointer
*
*@src: pointer
*
*@n: integer arg
*
*Description: "copies memory area"
*
*Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{

	unsigned int r;

	for (r = 0; r < n; r++)
	{

		dest[r] = src[r];
	}
	return (dest);
}

