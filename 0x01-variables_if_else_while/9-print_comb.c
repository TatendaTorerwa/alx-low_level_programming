#include <stdio.h>

/**
*main - entry point
*Description: " prints all possible combinations of single-digit numbers"
*
*Return: always 0 (success)
*/

int main(void)

{

int z;

for (z = 48; z <= 57; z++)

{
putchar(z);

if (z = 57)
{
break;
}
putchar(',');
putchar(' ');

}
putchar('\n');

return (0);

}
