#include "main.h"
#include <string.h>

/**
 * _strchr - locate a character in a string
 * @dest: char pointer parameter
 * @src: char parameter
 * Return: pointer to the first occurrence of the character c
 * in the string s, NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (0);
}
