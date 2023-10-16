#include "main.h"

/**
*_strcpy - copies the string
*
*@dest: pointer
*
*@src: pointer
*
*Description: "copies the string"
*
*Return: pointer
*/

char *_strcpy(char *dest, char *src)

{

	int m = 0;

	int z = 0;


	while (*(src + m) != '\0')

	{

		m++;

	}

	for ( ; z < m ; z++)

	{

		dest[z] = src[z];

	}

	dest[m] = '\0';

	return (dest);
}


