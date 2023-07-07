#include "main.h"
#include <string.h>

/**
*_memset - copies the character
*
*@s: pointer
*
*@b: char arg
*
*@n: integer arg
*
*Description: "copies the character"
*
*Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
