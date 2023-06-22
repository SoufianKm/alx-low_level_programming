#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit character (0 through 9)
 * @c: character parameter
 * Return: 1 if c is a digit, else 0
 */
int _isdigit(int c)
{
	int res = 0;
	
	if (isdigit(c))
		res = 1;

	return (res);
}
