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
	char hours, minutes, res;

	while (h < 24)
	{
		if (h < 10)
			hours ="0" + h;
		while (m < 60)
		{
			if (m < 10)
				minutes ="0" + m;
			res = hours + minutes+"\n";
			write(1, res, sizeof(res) - 1)
		}
	}
}
