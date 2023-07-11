#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width of an array
 * @height: height of an array
 * Return: return NULL if width or height is 0 or
 * failure, else return grid of 0
 */
int **alloc_grid(int width, int height)
{
	int **res, h = 0, w = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	res = (int **) malloc(sizeof(int *) * height);
	if (res == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		res[h] =(int *) malloc(sizeof(int) * width);
		if (res[h] == NULL)
		{
			free(res);
			for (w  = 0; w <= h; w++)
			{
				free(res[w]);
			}
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			res[h][w] = 0;
		}
	}
	return (res);
}
