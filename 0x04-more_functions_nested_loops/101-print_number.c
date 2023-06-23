#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - print a number
 * @n: integer parameter
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}

	if (n >= 10)
	{
		print_number(n / 10);
	}

	putchar('0' + n % 10);
}
