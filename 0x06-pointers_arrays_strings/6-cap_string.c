#include "main.h"

/**
*cap_string - capitalizes all words of a string
*
*@str: string
*
*Description: "capitalizes all words of a string"
*
*Return: pointer
*/

char *cap_string(char *str)

{
	int i, m;
	char special[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};


	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;

			}

			else
			{

				for (m = 0; m <= 12; m++)
				{
					if (special[m] == str[i - 1])
					{
						str[i] = str[i] - 32;
					}
				}
			}
		}
	}
	return (str);
}
