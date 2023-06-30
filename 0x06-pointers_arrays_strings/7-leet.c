#include "main.h"
#include <stdio.h>

/**
 * leet - incode characters with 1337
 * @str: pointer char parameter
 * Return: string encoded
 */
char *leet(char *str)
{
	int i, j;
	char l = "aAeEoOtTlL";
	char n = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (str[i] == l[j])
			{
				str[i] = n[j];
			}
		}
	}

	return (str)
}
