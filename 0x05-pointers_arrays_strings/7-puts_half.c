#include "main.h"

/**
* puts_half - prints half of a string
*
*@str: string
*
*Description: "prints half of a string"
*
*Return: (void)
*/

void puts_half(char *str)

{

	int r, m, longi;


	longi = 0;


	for (r = 0; str[r] != '\0'; r++)

		longi++;


	m = (longi / 2);


	if ((longi % 2) == 1)

		m = ((longi + 1) / 2);


	for (r = m; str[r] != '\0'; r++)

		_putchar(str[r]);

	_putchar('\n');

}
