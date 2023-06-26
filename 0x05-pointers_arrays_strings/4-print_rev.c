#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - print strings given i reverse
 * @s : pointer char parameter
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
