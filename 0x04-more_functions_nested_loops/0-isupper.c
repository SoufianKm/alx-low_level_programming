#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - function that checks for uppercase character
 * @c: integer parameter
 * Return: 1 if is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
