#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: integer parameter
 * Return: 1 if c is digit, else 0
 */
int _isdigit(int c)
{
	if(c >= 48 && c <= 57)
		return (1);
	return (0);
}
