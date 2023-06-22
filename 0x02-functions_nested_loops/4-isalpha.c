#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * for a parametre given
 * @c: parametre given to check
 * Return: 1 if parametr 'c' is alphabetic character, 0 if not
 */
int _isalpha(char c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
