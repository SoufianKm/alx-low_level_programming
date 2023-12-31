#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * times_table - print the 9 time table
 */
void times_table(void)
{
	int i, j, res = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if (j == 0)
				_putchar('0' + res);
			else if (res < 10)
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
			if (j < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
