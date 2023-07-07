#include <stdio.h>

/**
*main - prints the number of arguments passed
*
*@argc: argument count
*
*@argv: argument vector
*
*Description: "prints the number of arguments passed"
*
*Return: always 0 (success)
*/

int main(int argc, char *argv[])
{

	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
