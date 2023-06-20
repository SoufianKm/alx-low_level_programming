#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 */
int _islower(char c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
