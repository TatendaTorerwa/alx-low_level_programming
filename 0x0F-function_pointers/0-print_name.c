#include "function_pointers.h"
#include <stdio.h>

/**
*print_name - prints a name
*
*@name: name of the person
*
*@f: pointer to the function
*
*Description: "prints a name"
*
*Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
