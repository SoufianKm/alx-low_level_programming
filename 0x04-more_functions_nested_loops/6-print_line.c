#include "main.h"
#include <stdio.h>

/**
 * print_line - print '_' n times
 * using _putchar
 * _putchar - print character
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
