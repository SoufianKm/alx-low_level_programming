#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - print sign of a number given in parameter
 * @n: parametre given to check
 * Return: 1 and print '+' if parameter n is greater than 0
 *         0 and print '0' if parameter n is less than 0
 *         -1 and print '-' if parameter n is 0
 */
int print_sign(int n)
{
	int res;

	if (n == 0)
	{
		_putchar('0');
		res = 0;
	} else if (n < 0)
	{
		_putchar('-');
		res = -1;
	} else if (n > 0)
	{
		_putchar('+');
		res = 1;
	}
	return (res);
}
