#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - print strings given i reverse
 * @s : pointer char parameter
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
