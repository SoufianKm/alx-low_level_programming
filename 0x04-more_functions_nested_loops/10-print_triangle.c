#include "main.h"
#include <stdio.h>

/**
 * print_triangle - draw a triangle on the terminal
 * by '#' n times, using _putchar
 * @size: integer parameter
 * _putchar - print character
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - i)
				{
					_putchar(' ');
				} else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
