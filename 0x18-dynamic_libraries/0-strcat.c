#include "main.h"

/**
*_strcat - concatenates two strings
*@dest: pointer
*
*@src: pointer
*
*Description: "concatenates two strings"
*
*Return: pointer
*/

char *_strcat(char *dest, char *src)
{

	int length1 = 0;
	int length2 = 0;
	int i;

	while (src[length1] != '\0')
	{
		length1++;
	}

	while (dest[length2] != '\0')
	{
		length2++;
	}

	for (i = 0; i < length1; i++)
	{

		dest[length2 + i] = src[i];
	}

	return (dest);
}
