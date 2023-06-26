#include "main.h"

/**
*rev_string - reverses a string
*
*@s: string
*
*Description: "reverses a string"
*
*Return: (void)
*/

void rev_string(char *s)
{
	int m = 0;
	int r;
	
	while (s[m] != '\0')

	{
		m++;
	}

	for (r = m - 1; r >=0; r--)

	{
		s[r];
		s--;
	}

}
