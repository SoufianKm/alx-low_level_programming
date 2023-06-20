#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower(char c) - checks for lowercase character
 * for parametre 'c' given
 */
int _islower(char c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
