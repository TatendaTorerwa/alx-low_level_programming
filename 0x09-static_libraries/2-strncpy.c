#include "main.h"
#include <string.h>

/**
*_strncpy - copies up to n characters
*
*@dest: pointer
*
*@src: pointer
*
*@n: integer arg
*
*Description: "copies up to n characters"
*
*Return: pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
