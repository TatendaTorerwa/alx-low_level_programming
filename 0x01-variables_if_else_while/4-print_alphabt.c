#include <stdio.h>

/**
*main - entry point
*
*Description: "prints alphabet in lowercase"
*
*Return: always 0 (success)
*/

int main(void)

{
int n = 97;

while (n <= 122)
{
if (n == 101 || n == 113)
{
n++;
continue;
}

putchar(n);
n++;

}

putchar('\n');

return (0);

}
