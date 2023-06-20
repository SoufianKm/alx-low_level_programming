#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * This function should print alphabet, in
 * lowercase using function _putcha
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while(c <='z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
