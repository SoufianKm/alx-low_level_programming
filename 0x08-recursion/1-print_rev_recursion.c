#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints a string reverse
 * @s: pointer char parameter
 */
void _print_rev_recursion(char *s)
{
	int i = strlen(s);

	if (i > 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		i--;
	}
}
