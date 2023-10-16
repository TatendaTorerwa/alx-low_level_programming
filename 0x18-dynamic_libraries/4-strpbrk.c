#include "main.h"

/**
*_strpbrk - searches a string for any of a set of bytes
*
*@s: pointer
*
*@accept: pointer
*
*Description: "searches a string for any of a set of bytes"
*
*Return: pointer
*/

char *_strpbrk(char *s, char *accept)

{
	int p, t;

	for (p = 0; s[p] != '\0'; p++)
	{
		for (t = 0; accept[t] != '\0'; t++)
		{
			if (s[p] == accept[t])
			{
				return (s + p);
			}
		}
	}
	return ('\0');
}
