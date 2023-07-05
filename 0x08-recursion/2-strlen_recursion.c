#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return length of a string
 * @s: pointer char parameter
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i += _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
