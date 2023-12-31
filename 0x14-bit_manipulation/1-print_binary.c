#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: Number to print in binary.
 */
void print_binary(unsigned long int n)
{
int p, count_num = 0;
unsigned long int current_bit;

for (p = 63; p >= 0; p--)
{
current_bit = n >> p;

if (current_bit & 1)
{
_putchar('1');
count_num++;
}
else if (count_num)
{
_putchar('0');
}
}
if (!count_num)
{
_putchar('0');
}
}
