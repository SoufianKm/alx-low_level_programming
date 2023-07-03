#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print the chess board
 * @a: multidimensional array parameter
 */
void print_chessboard(char (*a)[8])
{
	int i, j, l;

	l = sizeof(a[0]);
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < l; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
