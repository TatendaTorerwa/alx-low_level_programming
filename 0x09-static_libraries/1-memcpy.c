#include "main.h"
#include <string.h>

/**
*_memcpy - copies characters
*
*@dest: pointer
*
*@src: pointer
*
*@n: integer arg
*
*Description: "copies characters"
*
*Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
