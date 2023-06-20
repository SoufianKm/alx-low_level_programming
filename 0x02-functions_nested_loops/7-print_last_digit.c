#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - return the last digit of a number
 * given in a parametre
 * @n: integer parametere given
 * Return: the last digit of a parameter
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
