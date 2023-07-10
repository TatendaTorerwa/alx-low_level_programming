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
	int **p;
	int m, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		p[m] = malloc(sizeof(int) * width);

		if (p[m] == NULL)
			for (m = 0; m >= 0; m--)
			{
				free(p[m]);
				free(p);
				return (NULL);
			}
	}
	for (m = 0; m < height; m++)
	{
		for (y = 0; y < width; y++)
			p[m][y] = 0;
	}

	return (p);
}
