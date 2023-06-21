#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - print from number given
 * to 98
 *
 * @n: integer paramter given
 *
 * printDigit - print all digits of a number
 * given in parameter
 *
 * @nbr: integer parameter 
 */
void print_to_98(int n)
{
	int i;
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i < n)
				_putchar(' ');
			if (i > 99)
				_putchar(',');
			printDigit(i);
		}
	} else if (n <= 98){
		for (i = n; i <= 98; i++)
		{
			if (i > n)
				_putchar(' ');
			if (i < 97)
				_putchar(',');
			if (n < 0)
				_putchar('-');
			printDigit(abs(i));
		}
	}
}

void printDigit(int nbr)
{
	int res;

	if (nbr == 0)
		return;
	res = nbr % 10;

	printDigit(nbr / 10);

	_putchar('0' + res);
}

