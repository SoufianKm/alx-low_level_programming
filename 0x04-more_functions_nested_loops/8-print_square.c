#include "main.h"
#include <stdio.h>

/**
 * print_square - draw a square on the terminal
 * by '#' n times, using _putchar
 * @n: integer parameter
 * _putchar - print character
 */
void print_square(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
