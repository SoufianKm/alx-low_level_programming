#include "main.h"
#include <stdio.h>

/**
 * factorial - calculate the factorial of number
 * @n : integer parameter
 * Return: -1 if n lower than 0, 1 if equal to 0
 * else return the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
