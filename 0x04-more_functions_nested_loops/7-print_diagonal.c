#include "main.h"

/**
*print_diagonal - draws a diagonal line
*
*@n: integer arg
*
*Description: "draws a diagonal line"
*
*Return: (void)
*/

void print_diagonal(int n)

{

	int i, j;

	if (n <= 0)

	{

		_putchar('\n');
	}

	else

	{

		for (i = 0; i < n; i++)

		{

			for (j = 0; j < i; j++)

			{

				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');

		}

	}
}
