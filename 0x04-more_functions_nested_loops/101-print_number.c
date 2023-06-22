#include "main.h"

/**
*print_number - prints an integer
*
*@n: integer arg
*
*Description: "prints an integer"
*
*Return: (void)
*/

void print_number(int n)
{

	unsigned int r;
	r = n;
	if (n < 0)

	{

		_putchar(45);
		_putchar(n);
		r = -n;
	}

	else 

	{

		r = n;
	}

	if (r / 10)

	{

		print_number(r / 10);
	}

	_putchar(r % 10 + '0');
}
