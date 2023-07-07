#include "main.h"
#include <string.h>

/**
*_strstr - finds the first occurrence of the substring
*
*@haystack: pointer
*
*@needle: pointer
*
*Description: "finds the first occurrence of the substring"
*
*Return: pointer
*/

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
