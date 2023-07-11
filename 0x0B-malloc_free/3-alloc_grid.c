#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 *
 * @width: width input
 *
 * @height: height input
 *
 * Description: "returns a pointer to a 2 dimensional array"
 *
 * Return: 2 dimensional Array
 */

int **alloc_grid(int width, int height)
{
	int **pee;
	int m, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	 pee = malloc(sizeof(int *) * height);

	if (pee == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		pee[m] = malloc(sizeof(int) * width);
		if (pee[m] == NULL)
		{
			for (; m >= 0; m--)
				free(pee[m]);
			free(pee);
			return (NULL);
		}
	}


	for (m = 0; m < height; m++)
	{
		for (y = 0; y < width; y++)
			pee[m][y] = 0;
	}

	return (pee);
}
