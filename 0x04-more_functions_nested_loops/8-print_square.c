#include "main.h"

/**
*print_square - prints a square
*
*@size: integer arg
*
*Description: "prints a square"
*
*Return: (void)
*/

void print_square(int size)

{
	int count = 0, start;

	if (size <= 0)

	{
		_putchar('\n');
	}

	else

	{
		for (start = 0; start < size; start++)

		{

			while (count < size)

			{
				_putchar('#');
				count++;
			}

			count = 0;
			_putchar('\n');
		}

	}
}

