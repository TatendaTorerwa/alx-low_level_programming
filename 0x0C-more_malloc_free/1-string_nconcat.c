#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*string_nconcat -  concatenates two strings
*
*@s1: string to append to
*
*@s2: string to concatenate from
*
*@n: number of bytes from s2 to concatenate to s1
*
*Description: "concatenates two strings"
*
*Return: pointer to the resulting string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *ptr;
	unsigned int len1 = 0, len2 = 0, m = 0, p = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n > len2)
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	while (m < len1)
	{
		ptr[m] = s1[m];
		m++;
	}
	while (n < len2 && m < (len1 + n))
	{
		ptr[m] = s2[p];
		m++;
		p++;
	}
	while (n > len2 && m < (len1 + len2))
	{
		ptr[m] = s2[p];
		m++;
		p++;
		n--;
	}
	ptr[m] = '\0';
	return (ptr);
}
