#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * times_table - print the 9 time table
 */
void times_table(void)
{
	int i, j, res = 0;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			res = i * j;
			if (res < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + res);
			} else
			{
				_putchar(' ');
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
			}
			if (j < 8)
				_putchar(',');
		}
		_putchar('\n');
	}
}
