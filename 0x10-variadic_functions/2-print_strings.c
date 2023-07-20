#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_strings - prints strings
*
*@separator: string to be printed between the strings
*
*@n: the number of strings passed
*
*...: individual variable number of strings to be printed
*
*Return: (void)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	char *str;
	unsigned int m;

	va_start(strings, n);

	for (m = 0; m < n; m++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (m != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
