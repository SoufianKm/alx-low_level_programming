#include "main.h"
#include <stdio.h>

/**
 * print_number - print a number
 * @n: integer parameter
 */

void print_number(int n)
{
	if (n < 0)
	{
		n *= (-1);
		_putchar('-');
	}

	if (n >= 10)
	{
		n /= 10;
	}

	print_number(n);
	
	_putchar('0' + n % 10);
}
