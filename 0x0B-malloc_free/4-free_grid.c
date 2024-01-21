#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function name that frees a 2 dimensional grid
 * @grid: pointer to a pointer that holds the value of an interger
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int iterator;

	for (iterator = 0; iterator < height; iterator++)
	{
		free(grid[iterator]);
	}
	free(grid);
}
