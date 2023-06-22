#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print number from 0 to 9
 * using _putchar
 */
void print_numbers(void)
{
	int n = 0;

	while(n < 10)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
