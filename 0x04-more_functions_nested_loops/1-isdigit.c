#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit- checks for a digit through 0 - 9
 * @c: parameter given 
 * Return: 1 if c an uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
