#include "main.h"
#include <stdio.h>
/**
 * _strcmp - changes all lowercase letters of a string to uppercase
 * @str: pointer char parameter
 * Return: string in uppercase
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
