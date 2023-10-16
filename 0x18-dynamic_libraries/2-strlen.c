#include "main.h"

/**
*_strlen - returns the length of a string
*
*@s: integer arg
*
*Description: "returns the length of a string"
*
*Return: integer value (str length)
*/

int _strlen(char *s)

{
	int count = 0;

	while (s[count] != '\0')

	{
		count++;
	}

	return (count);

}
