#include "main.h"
#include <ctype.h>

/**
*_islower - check if character is lowercase
*
*@c: integer arg
*
*Description: "check if character is lowercase"
*
*Return: always 0 (success)
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
