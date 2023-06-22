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

	int start = 0;
	int end = size;
	int count;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{

		for (count = 0; count < end; count++)
		{

			while (start < end)

			{
				if ((start + count + 1) >= end)
				{
					_putchar('#');
				}

				else
				{

					_putchar(' ');
				start++;
				}
			}
			start = 0;
			_putchar('\n');
		}
	}
}
