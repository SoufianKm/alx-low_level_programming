#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that checks for uppercase character
 * Return: 1 if is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c) == 1)
		return (1);
	else
		return (0);
}
