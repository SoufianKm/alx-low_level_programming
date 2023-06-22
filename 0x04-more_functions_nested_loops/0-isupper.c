#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: parameter given 
 * Return: 1 if c an uppercase, else 0
 */
int _isupper(int c)
{
	if(isupper(c))
		return (1);
	else
		return (0);
}
