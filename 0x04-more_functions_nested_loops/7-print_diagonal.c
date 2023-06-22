#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draw a diagonal on the terminal
 * by '\' n times, using _putchar
 * @n: integer parameter
 * _putchar - print character
 */
void print_diagonal(int n)
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
				if (i == j)
				{
					_putchar('\\');
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
