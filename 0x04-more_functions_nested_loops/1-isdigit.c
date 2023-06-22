#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: integer parameter
 * Return: 1 if c is digit, else 0
 */
int _isdigit(int c)
{
	int res;

	if(isdigit(c))
		res = 1;
	else
		res = 0;
	return (res);
}
