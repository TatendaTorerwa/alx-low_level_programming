#include "main.h"
#include <string.h>

/**
*_strncat - appends the string
*
*@dest: pointer
*
*@src: pointer
*
*@n: integer arg
*
*Description: "appends the string"
*
*Return: pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
