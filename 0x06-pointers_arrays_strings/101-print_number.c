#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n : integer parameter
 */
void print_number(int n)
{
	int l;

	l = n;
	if (n < 0)
	{
		_putchar('-');
		l = -n;
	}

	if (l / 10 != 0)
	{
		print_number(l / 10);
	}
	_putchar('0' + (l % 10));
}
