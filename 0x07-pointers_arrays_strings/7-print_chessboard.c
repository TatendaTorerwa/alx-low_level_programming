#include "main.h"

/**
*print_chessboard - prints the chessboard
*
*@a: pointer
*
*Description: "prints the chessboard"
*
*Return: always 0 (success)
*/

void print_chessboard(char (*a)[8])

{

	int z, n;

	for (z = 0; z < 8; z++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[z][n]);
		}
		_putchar('\n');
	}
}
