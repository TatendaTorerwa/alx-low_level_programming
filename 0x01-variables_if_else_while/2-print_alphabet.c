#include <stdio.h>

/**
*main - entry point
*
*Description: "prints the alphabet in lowercase"
*
*Return: always 0 (success)
*/

int main(void)

{
int x = 97;

while (x <= 122)
{
putchar(x);
x++;
}

putchar('\n');

return (0);

}
