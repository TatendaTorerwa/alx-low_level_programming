#include <stdio.h>

/**
*main - entry point
*
*Description: "computes and prints the sum of all the multiples"
*
*Return: always 0 (success)
*/

int main(void)
{
	int sum = 0;
	int r;

	for (r = 0; r <= 1024; r++)
	{
		if (r % 3 == 0 || r % 5 == 0)
		{
			sum = sum + r;

		}
}

printf("%d\n", sum);

return (0);
}

