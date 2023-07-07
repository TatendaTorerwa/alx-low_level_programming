#include "main.h"
#include <string.h>

/**
*_strchr - searches for the first occurrence of the character
*
*@s: pointer
*
*@c: char integer
*
*Description: "searches for the first occurrence of the character"
*
*Return: pointer
*/

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
