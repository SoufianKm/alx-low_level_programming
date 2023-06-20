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
		if (h < 10)
			_putchar('0');
		_putchar('0' + h)
		while (m < 60)
		{
			if (m < 10)
				_putchar('0');
			_putchar('0' + m);
		}
		_putchar('\n');
	}
}
