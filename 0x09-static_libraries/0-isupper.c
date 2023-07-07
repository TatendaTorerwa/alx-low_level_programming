#include "main.h"
#include <ctype.h>

/**
*_isupper - check if a character is a uppercase
*
*@c: integer arg
*
*Description: "check if a character is a uppercase"
*
*Return: always 0 (success)
*/

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
