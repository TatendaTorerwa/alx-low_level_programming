#include <stdio.h>
#include "main.h"

/**
*print_array - prints n elements of an array of integers
*
*@a: pointer
*
*@n: integer arg
*
*Description: "prints n elements of an array of integers"
*
*Return: (void)
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
		{
			break;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}



