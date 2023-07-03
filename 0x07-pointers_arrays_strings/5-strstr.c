#include "main.h"

/**
*_strstr - locates a substring
*
*@haystack: pointer
*
*@needle: pointer
*
*Description: "locates a substring"
*
*Return: pointer
*/

char *_strstr(char *haystack, char *needle)

{

	int i, m;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (m = 0; needle[m] != '\0'; m++)
		{
			if (haystack[i + m] != needle[m])
			{
				break;
			}
		}
		if (needle[m] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
