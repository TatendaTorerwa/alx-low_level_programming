#include <stdio.h>
#include <stdlib.h>

/**
*main -  prints the minimum number of coins to make change
*
*@argc: argument count
*
*argv: argument vector
*
*Description: " prints the minimum number of coins to make change"
*
*Return: always 0 (success)
*/

int main(int argc, char *argv[])
{

	int num, i, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "ERROR");
		return (1);
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (num >= coins[i])
		{
			num = num - coins[i];
			result++;
		}
	}
	printf("%d\n", result);

	return (0);
}
