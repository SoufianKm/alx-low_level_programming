#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - print from number given
 * to 98
 *
 * @n: integer paramter given
 */
void print_to_98(int n)
{
	int i;
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			int res = i;
			
			if (i < n)
				_putchar(' ');
			if (i > 99)
				_putchar(',');
			while (res > 0)
			{
				if (res == 0)
					break;
				_putchar('0' + (res % 10));
				res /= 10;

			}
		}
	} else if (n <= 98){
		for (i = n; i <= 98; i++)
		{
			int res = i;
			
			if (i > n)
				_putchar(' ');
			if (i < 97)
				_putchar(',');
			if (n < 0)
				_putchar('-');
			while (res > 0)
			{
				if (res == 0)
					break;
				_putchar('0' + (res % 10));
				res /=10;
			}
		}
	}
}
