#include "main.h"

/**
*swap_int - swaps the values of two integers
*
*@a: integer arg
*
*@b: integer arg
*
*Description: "swaps the values of two integers"
*
*Return: (void)
*/

void swap_int(int *a, int *b)
{
	int m, n;

	m = *a;
	n = *b;
	*a = n;
	*b = m;

}
