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

	res = malloc(sizeof(int *) * width);

	if (res == NULL)
		return (NULL);

	while (w < width)
	{
		h = 0;
		res[w] = malloc(sizeof(int) * height);
		if (res == NULL)
		{
			while (w > 0)
			{		w--;
				free(res[w]);
			}
			free(res);
		}

		while (h < height)
		{
			res[w][h] = 0;
			h++;
		}
		w++;

	}

	return (res);
}
