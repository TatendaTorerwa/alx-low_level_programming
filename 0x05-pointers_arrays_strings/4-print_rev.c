#include "main.h"

/**
*print_rev - prints a string, in reverse
*
*@s: string
*
*Descriprion: "prints a string, in reverse"
*
*Return: always 0 (success)
*/

void print_rev(char *s)
{

	int i = 0;
	int p;

	while (s[i] != '\0')

	{

		i++;
	}
	for (p = i; p > 0; p--)
	{

		_putchar(s[p]);
	}

	_putchar('\n');
}
