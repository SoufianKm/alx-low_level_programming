#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - print a seconde half of string given
 * @str : pointer char parameter
 */
void puts_half(char *str)
{
	int i, counter = 0;
	long l = strlen(str);

	if (l % 2 == 0)
		counter = l / 2;
	else
		counter = (l - 1) / 2;

	for (i = counter; i < l ;i++)
			_putchar(str[i]);
	_putchar('\n');
}
