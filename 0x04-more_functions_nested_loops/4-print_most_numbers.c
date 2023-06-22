#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print number from 0 to 9
 * except 2 and 4 using _putchar
 */
void print_most_numbers(void)
{
	int n = 0;

	while(n < 10)
	{
		if (n != 2 && n != 4)
			_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
