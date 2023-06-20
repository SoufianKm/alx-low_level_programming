#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * for parametre given
 * @c: parametre given to check
 * Return: 1 if parametr 'c' is lowercase, 0 if not
 */
int _islower(char c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
