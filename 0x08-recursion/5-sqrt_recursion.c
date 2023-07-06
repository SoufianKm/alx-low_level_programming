#include "main.h"
#include <stdio.h>

/**
 * calculate_sqrt - get the natural square of number
 * @i : integer parameter
 * @n : integer parameter
 * Return: -1 if n lower than 0, return value of i.
 */
int calculate_sqrt(int i, int n)
{
	if (n < 0 || i < 0)
	{
		return (-1);
	} else if (n == 1)
	{
		return (1);
	}

	if (i * i != n)
	{
		i--;
		return (calculate_sqrt(i, n));
	}
	return (i);
}

/**
 * _sqrt_recursion - calculate the natural square root of a number.
 * @n : integer parameter
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (calculate_sqrt(n - 1, n));
}
