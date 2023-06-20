#include "main.h"
#include <stdio.h>

/**
*print_to_98 - prints all natural numbers from n to 98
*
*@n: integer arg
*
*Description: "prints all natural numbers from n to 98"
*
*Return: always 0 (success)
*/

void print_to_98(int n)
{

	int begin;

	if (n > 98)

	{
		for (begin = n; begin >= 98; begin--)
		{
			printf("%d", begin);

			if (begin == 98)
			{
				break;
			}
			else
			{
				printf(", ");
			}
		}
	}
	else
{
		for (begin = n; begin <= 98; begin++)
		{
			printf("%d", begin);
			if (begin == 98)
			{
				break;
			}
			else
			{
				printf(", ");
			}
		}
}

printf("\n");

}
