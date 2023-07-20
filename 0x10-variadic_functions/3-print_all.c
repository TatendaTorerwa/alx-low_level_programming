#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_all -  prints anything
*
*@format: list of types of arguments passed
*
*@...: individual variable arguments
*
*Return: (void)
*/

void print_all(const char * const format, ...)
{
	int r = 0;
	char *str, *separator = "";

	va_list lists;

	va_start(lists, format);

		while (format[r])
		{
			switch (format[r])
			{
				case 'c':
					printf("%s %c", separator, va_arg(lists, int));
					break;
				case 'i':
					printf("%s %d", separator, va_arg(lists, int));
					break;
				case 'f':
					printf("%s %f", separator, va_arg(lists, double));
					break;
				case 's':
					str = va_arg(lists, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s %s", separator, str);
					break;
			}
			separator = ", ";
			r++;
		}
	
		printf("\n");
		va_end(lists);
}
