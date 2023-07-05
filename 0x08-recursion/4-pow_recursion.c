#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - calculate the value of x raised to the power y
 * @x : integer parameter
 * @y : integer parameter
 * Return: -1 if y is lower than 0, 1 if equal to 0
 * else return value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
