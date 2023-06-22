#include "main.h"

/**
*print_most_numbers - prints the numbers, from 0 to 9
*
*Description: "prints the numbers, from 0 to 9"
*
*Return: (void)
*/

void print_most_numbers(void)

{

	int r;

	for (r = 48; r <= 57; r++)


	{

		if (r == 50 || r == 52)

		{

			continue;

		}


		else

		{

			_putchar(r);

		}


	}

			_putchar('\n');

}
