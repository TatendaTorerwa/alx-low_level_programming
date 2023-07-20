#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers -  prints numbers
*
*@separator: string to be printed between numbers
*
*@n: the number of integers passed
*
*...: individual variable number of numbers to be printed
*
*Return: (void)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;

	unsigned int m;

	va_start(numbers, n);

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(numbers, int));
		if (m != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
