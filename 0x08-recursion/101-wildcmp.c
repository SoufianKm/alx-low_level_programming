#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings if the strings can be considered identical
 * @s1: char pointer parameter
 * @s2: char pointer parameter
 * Return: 1 if the strings can be considered
 * identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);


}
