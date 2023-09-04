#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - frees a 2d array
  *@grid:memory block to be freed
  *@height:height of the array
  *Return:returns void
  */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
