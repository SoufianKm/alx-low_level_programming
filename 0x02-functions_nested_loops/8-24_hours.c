#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * jack_bauer - print every minute
 * of the day of Jack Bauer
*/

void jack_bauer(void)
{
	int h = 0, m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar('0' + h);
			} else
			{
				_putchar('0' + (h / 10));
				_putchar('0' + (h % 10));
			}
			_putchar(':');
			if (m < 10)
			{
				_putchar('0');
				_putchar('0' + m);
			} else
			{
				_putchar('0' + (m / 10));
				_putchar('0' + (m % 10));
			}
			_putchar('\n');
			m++;
		}
		m = 0;
		h++;
	}
}
