#include "main.h"
#include <stdio.h>

/**
*print_diagsums - prints the sum of the two diagonals of a matrix
*
*@a: pointer
*
*@size: integer arg
*
*Description: "prints the sum of the two diagonals of a matrix"
*
*Return: (void)
*/

void print_diagsums(int *a, int size)

{
	int m;
	int sum1 = 0;
	int sum2 = 0;


	for (m = 0; m < size; m++)
	{
		sum1 += a[m * size + m];
	}
	for (m = 0; m < size; m++)
	{
		sum2 += a[m * size + (size - 1 - m)];
	}
	printf("%d, %d", sum1, sum2);
	printf("\n");
}
