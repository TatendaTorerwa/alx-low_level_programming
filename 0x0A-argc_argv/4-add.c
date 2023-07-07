#include <stdio.h>
#include <stdlib.h>

/**
*main -  adds positive numbers
*
*@argc: argument count
*
*@argv: argument vector
*
*Descriprion: " adds positive numbers"
*
*Return: always 0 (success)
*/

int main(int argc, char *argv[])
{

	int num, i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num <= 0 && argv[1][0] != '\0')
		{
			printf("Error\n");
			return (1);
		}
			sum = sum + num;
	}
	printf("%d\n", sum);


	return (0);
}
