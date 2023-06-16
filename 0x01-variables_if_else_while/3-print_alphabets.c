#include <stdio>

/**
*main - entry point
*
*Description: "prints the alphabet in lowercase and uppercase"
*
*Return: always 0 (success)
*/

int main(void)

{

int x=97;
int y=65;

while (x <= 122)
{
putchar(x);
x++;
}

while (y <= 90)
{
putchar(y);
y++
}

putchar('\n');

return (0);
