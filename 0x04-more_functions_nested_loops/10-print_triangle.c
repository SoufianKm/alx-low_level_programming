#include "main.h"
#include <stdio.h>

/**
 * print_triangle - draw a triangle on the terminal
 * by '#' n times, using _putchar
 * @n: integer parameter
 * _putchar - print character
 */
void print_triangle(int n)
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
				if (j < n - i)
				{
					_putchar(' ');
				} else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
