#include "main.h"
#include <string.h>

/**
*_strpbrk - finds the first character in the string
*
*@s: pointer
*
*@accept: pointer
*
*Description: "finds the first character in the string"
*
*Return: pointer
*/

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
