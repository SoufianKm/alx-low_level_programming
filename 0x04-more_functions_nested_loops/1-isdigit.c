#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit through 0 - 9
 * @c: integer parameter
 * Return: 1 if c is digit, else 0
 */
int _isdigit(int c)
{
	return (isdigit(c));
}
