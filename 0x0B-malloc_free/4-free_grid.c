#include "main.h"
#include <stdlib.h>

/**
 * free_grid - 
 * @grid: grid with two dimension
 * @height: height of grid
 * Return : nothing
 */
void free_grid(int **grid, int height)
{
	int h;

	free(grid);
	for (h = 0; h < height; h++)
		free(grid[h]);
}
