#include <stdio.h>

/**
*main - prints all arguments it receives
*
*@argc: argument count
*
*@argv: argument vector
*
*Description: "prints all arguments it receives"
*
*Return: always 0 (success)
*/

int main(int argc, char *argv[])

{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}

	return (0);
}
