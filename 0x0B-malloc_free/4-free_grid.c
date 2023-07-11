#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
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
