#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 * print_alphabet used to print alphabet
 * in lowercase
 *
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
