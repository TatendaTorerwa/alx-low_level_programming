#include "main.h"

/**
*leet -  encodes a string
*
*@str: string
*
*Description: " encodes a string"
*
*Return: always 0 (success)
*/

char *leet(char *str)

{

	int r = 0;
	int m;

	char a[] = "aeotlAEOTL";
	char b[] = "4307143071";


	while (str[r] != '\0')
	{

		for (m = 0; m <= 9; m++)
		{

			if (str[r] == a[m])
			{
				str[r] = b[m];
			}
		}

		r++;
	}

	return (str);
}

