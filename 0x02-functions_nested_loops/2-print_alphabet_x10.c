#include "main.h"

/**
*print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
*
*Description: " prints 10 times the alphabet, in lowercase"
*
*Return: (void)
*/

void print_alphabet_x10(void)

{
int a;
int b;

for (a = 0; a < 10; a++)

{
for (b = 97; b <= 122; b++)

{
_putchar(b);

}

_putchar('\n');

}

}
