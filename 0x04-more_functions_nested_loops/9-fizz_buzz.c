#include <stdio.h>

/**
*main - entry point
*
*Description: "prints the numbers from 1 to 100"
*
*Return: always 0 (success)
*/

int main(void)

{

	int m;

	for (m = 1; m <= 100; m++)
	{
		if ((m % 3 == 0) && (m % 5 == 0))

			printf("FizzBuzz ");

		else if (m % 3 == 0)

			printf("Fizz ");

		else if (m % 5 == 0)

			printf("Buzz ");

		else

			printf("%d ", m);

	}
		printf("\n");
		return (0);
}
