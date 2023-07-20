#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - returns the sum of all its parameters.
*
*@n: The number of paramters passed to the function.
*
*@...: A variable number of paramters to calculate the sum of.
*
*Return: the sum of all parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list parameter;
	unsigned int m, sum = 0;

	va_start(parameter, n);

	if (n == 0)
		return (0);

	for (m = 0; m < n; m++)
	{
		sum += va_arg(parameter, int);
	}

	va_end(parameter);

	return (sum);
}
