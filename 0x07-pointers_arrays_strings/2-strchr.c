#include "main.h"
#include <stdio.h>

/**
*_strchr -  locates a character in a string
*
*@s: pointer
*
*@c: char arg
*
*Description: " locates a character in a string"
*
*Return: pointer
*/

char *_strchr(char *s, char c)

{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == c)
	{
			return (&(s[n]));
	}
	}

	return (NULL);
}
