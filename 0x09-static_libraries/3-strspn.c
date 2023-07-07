#include "main.h"
#include <string.h>

/**
*_strspn - calculates the length
*
*@s: ponter
*
*@accept: pointer
*
*Description: "calculates the length"
*
*Return: always 0 (success)
*/

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
