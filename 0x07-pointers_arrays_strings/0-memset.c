#include "main.h"

/**
*_memset - fills memory with a constant byte
*
*@s: pointer
*
*@b: char arg
*
*@n: integer arg
*
*Description: "fills memory with a constant byte"
*
*Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int m;

	for (m = 0; m < n; m++)
	{

		s[m] = b;
	}
	return (s);
}
