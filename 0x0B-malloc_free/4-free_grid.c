#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: pointer to a function
 *
 * @height: height dimension of grid
 *
 * Description: "frees a 2 dimension of grid"
 *
 * Return: (void)
 */

void free_grid(int **grid, int height)
{
	int m;
	for (m = 0; m < height; m++)
	{
		free(grid[m];
	}
	free(grid);
}	
