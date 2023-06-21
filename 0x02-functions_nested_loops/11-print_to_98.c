#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - print from number given
 * to 98
 *
 * @n: integer paramter given
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n && i > 99)
				_putchar(',');
			if (i < n)
				_putchar(' ');
			printf("%d", i);
		}
		_putchar('\n');
	} else if (n <= 98){
		for (i = n; i <= 98; i++)
		{
			if (i != n && i < 99)
				_putchar(',');
			if (i > n)
				_putchar(' ');
			if (i < 0)
				_putchar('-');
		}
		_putchar('\n');
	}
}
