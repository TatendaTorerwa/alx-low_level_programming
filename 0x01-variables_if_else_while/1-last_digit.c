#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - entry point
*
*Description: "return value is 0 considered success"
*
*Return: always 0 (success)
*/

int main(void)
{
	int n;
int Ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

Ld = n % 10;

if (Ld > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, Ld);
}
else if (Ld == 0)
{
printf("last digit of %d is %d and is 0\n", n, Ld);
}
else
{
printf("last digit of %d is %d and is less than 6 and not zero\n", n, Ld);
}

return (0);
}
