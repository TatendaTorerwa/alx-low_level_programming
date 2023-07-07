#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
*_putchar - to print output
*
*@c: integer arg
*
*Descriptio: "to print output"
*
*Return: always 0 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
