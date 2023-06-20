#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add - adds two integers and returns the result
 *
 * @a, @b: parameters given
 *
 * Return: the sum of parameters
 */
int add(int a, int b)
{
	int res = a + b;

	if (res < 0)
	{
		_putchar('-');
		res = labs(res);
	}
	while ((res / 10) > 0)
	{
		if (res == 0)
			break;
		_putchar('0' + res % 10);
		res /= 10;
	}
	_putchar('\n');
}
