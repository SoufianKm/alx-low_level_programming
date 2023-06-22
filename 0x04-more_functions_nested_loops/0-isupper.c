#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character parameter
 * Return: 1 if c is an uppercase, else 0
 */
int _isupper(int c)
{
	int res = 0;

	if (isupper(c))
		res = 1;

	return (res);
}
