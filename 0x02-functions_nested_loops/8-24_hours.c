#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * jack_bauer - print every minute
 * of the day of Jack Bauer
 *
 * getFirstDigit - return the first digit of
 * a number given
 *
 * getLastDigit - return the last digit of
 * number given
*/

void jack_bauer(void)
{
	int h = 0, m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			if (h < 10)
				_putchar('0');
			else
			{
				_putchar('0' + getFirstDigit(h));
				_putchar('0' + getLastDigit(h));
			}
			_putchar(':');
			if (m < 10)
				_putchar('0');
			else
			{
				_putchar('0' + getFirstDigit(h));
				_putchar('0' + getLastDigit(h));
			}
			_putchar('\n');
			m++;
		}
		h++;
	}
}

int getFirstDigit(int n)
{
	int res;

	while(n >= 10)
	{
		res = n / 10 ;
	}
	return (res);
}

int getLastDigit(int n)
{
        int res;

        res = n % 10 ;
        return (res);
}
