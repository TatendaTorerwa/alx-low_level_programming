#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*
*@s: pointer
*
*@accept: pointer
*
*Description: " gets the length of a prefix substring"
*
*Return: length
*/

unsigned int _strspn(char *s, char *accept)

{

	unsigned int m, p;
	unsigned int length = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (p = 0; accept[p] != '\0'; p++)
		{
			if (accept[p] == s[m])
			{
				length++;
				break;
			}
		}
		if (accept[p] == '\0')
		{
			return (length);
		}
	}

	return (length);
}

