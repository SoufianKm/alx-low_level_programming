#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: parameter given 
 * Return: 1 if c an uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
