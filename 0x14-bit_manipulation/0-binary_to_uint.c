#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
*binary_to_uint - converts a binary number to an unsigned int.
*
*@b: string containing the binary number
*
*Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_value = 0;
	int p;

	if (b == NULL)
	{
		return (0);
	}

	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
		{
			return (0);
		}

		else
		{
			dec_value = 2 * dec_value + (b[p] - '0');
		}
	}
	return (dec_value);
}

