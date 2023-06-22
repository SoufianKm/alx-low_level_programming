#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 * _putchar: function print character 
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n++)
	{
		if (n != 2 || n != 4)
		{
			_putchar('0' + n);
		}
	}
	_putchar('\n');
}
