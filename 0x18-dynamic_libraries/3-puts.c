#include "main.h"

/**
*_puts - prints a string
*
*@str: pointer to a string variable
*
*Description: "prints a string"
*
*Return: string
*/

void _puts(char *str)

{

	int n = 0;

	while (str[n] != '\0')

	{

		_putchar(str[n]);
		n++;
	}

	_putchar('\n');

}
