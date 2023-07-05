#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - count the length of a string
 * @s: pointer char parameter
 * Return: length of string
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
