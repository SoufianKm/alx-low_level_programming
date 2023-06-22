#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 10 times number from 0 to 14
 * using _putchar
 */
void more_numbers(void)
{
	int i, n = 0;

	for (i = 0; i < 10; i++)
	{
		while (n <= 14)
		{
			if (n / 10 != 0)
				_putchar('0' + n / 10 );
			_putchar('0' + n % 10 );
			n++;
		}
		n = 0;
		_putchar('\n');
	}
}
