#include "main.h"

/**
*print_triangle - prints a triangle
*
*@size: integer arg
*
*Description: "prints a triangle"
*
*Return: (void)
*/

void print_triangle(int size)

{

	int row, hashes, spaces;

	if (size <= 0)

	{
		_putchar('\n');
	}

	else

	{

		for (row = 1; row <= size; row++)
		{

			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(32);
			}
			for (hashes = 1; hashes <= row; hashes++)
			{

				_putchar(35);
			}
				_putchar('\n');
		}
	}
}
