#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: String containing the binary number.
 *
 * Return: The converted number.
 */

unsigned int binary_to_uint(const char *b)
{
int m;
unsigned int decimal_value = 0;

if (b == NULL)
{
return (0);
}

for (m = 0; b[m]; m++)
{
if (b[m] < '0' || b[m] > '1')
{
return (0);
}
else
{
decimal_value = (decimal_value << 1) | (b[m] - '0');
}

}
return (decimal_value);
}
