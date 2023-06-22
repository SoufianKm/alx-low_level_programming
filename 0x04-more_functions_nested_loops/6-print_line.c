#include "main.h"
#include <stdio.h>

/**
 * print_line - print '_' n time
 * using _putchar
 */
void print_line(int n)
{
	i = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i++ < n)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
