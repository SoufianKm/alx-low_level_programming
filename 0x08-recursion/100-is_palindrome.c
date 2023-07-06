#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _check - check if a string is a palindrome
 * @c: pointer char parameter (string)
 * @i: integer parameter (index of character)
 * @l: integer parameter (size of string)
 * Return: 1 if is a palindrome, else 1.
 */
int _check(char *c, int i, int l)
{
	if (*(c + i) == *(c + (l - i)))
	{
		if (i == (l / 2))
			return (1);

		i++;
		return (_check(c, i, l));
	}

	return (0);
}

/**
 * is_palindrome - check if string is a palindrome
 * @s: char pointer parameter
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int l = strlen(s) - 1;

	if (*s == '\0')
		return (0);

	return (_check(s, 0, l));
}
