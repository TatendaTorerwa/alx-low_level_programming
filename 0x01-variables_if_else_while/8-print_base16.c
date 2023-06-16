#include <stdio.h>

/**
*main - entry point
*
*Description: "prints all the numbers of base 16 in lowercase"
*
*Return: always 0 (success)
*/

int main(void)

{

int a;
int x;

for (a = 48; a <= 57; a++)

{
putchar(a);
a++;
}

for (x = 97; x <= 102; x++)

{
putchar(x);
x++;

}

putchar('\n');

return (0);

}
