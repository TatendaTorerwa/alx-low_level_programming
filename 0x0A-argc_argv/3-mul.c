#include <stdio.h>
#include <stdlib.h>

/**
*main -  multiplies two numbers
*
*@argc: argument count
*
*@argv: argument vector
*
*Description: " multiplies two numbers"
*
*Return: always 0 (success)
*/

int main(int argc, char *argv[])
{

	int m, n;

	if (argc - 1 == 2)
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);

		printf("%d\n", m * n);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
