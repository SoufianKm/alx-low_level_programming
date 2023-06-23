#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_number - print a number
 * @n: integer parameter
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = abs(n);
		_putchar('-');
	}

	if (n >= 10)
	{
		print_number(n / 10);
	}

	_putchar('0' + n % 10);
}
