#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack.
 * @haystack: char pointer parameter
 * @needle: char pointer parameter
 * Return: pointer to the beginning of the located
 * substring, NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (haystack != '\0')
	{
		char *h = haystack, *n = needle;

		if (*n == *h && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}
