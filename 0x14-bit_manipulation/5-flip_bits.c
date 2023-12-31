#include "main.h"

/**
 * flip_bits - Returns number of bits you would need to flip.
 *
 * @n: First number.
 *
 * @m: Second number.
 *
 * Return: Number of bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int p, count_num = 0;
unsigned long int current_bit;
unsigned long int exclusive = n ^ m;

for (p = 63; p >= 0; p--)
{
current_bit = exclusive >> p;
if (current_bit & 1)
{
count_num++;
}
}
return (count_num);
}
