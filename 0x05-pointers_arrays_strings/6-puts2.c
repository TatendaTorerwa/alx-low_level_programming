#include "main.h"

/**
*puts2 - prints every other character of a string
*
*@str: string
*
*Description: "prints every other character of a string"
*
*Return: (void)
*/

void puts2(char *str)

{

	int i = 0;
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	while (i <= count - 1)
	{
		_putchar(str[i]);
		i += 2;
	}
	

	_putchar('\n');
}
