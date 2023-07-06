#include "main.h"
#include <stdio.h>

/**
 * _prime - search for prime number
 * @i : integer parameter
 * @n : integer parameter
 * Return: 0 if n is prime number, 1 if it is not.
 */
int _prime(int i, int n)
{

	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	i++;

	return (_prime(i, n));
}

/**
 * is_prime_number - check if number is a prime number.
 * @n : integer parameter
 * Return: 0 if is a prime number, else 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime(2, n));
}
