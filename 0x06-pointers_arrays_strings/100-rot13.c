#include "main.h"
#include <stdio.h>

/**
 * rot13 - incode characters using rot13
 * @str: pointer char parameter
 * Return: string encoded
 */
char *rot13(char *str)
{
	int i, j;
	char l[] = "abcdefghijklmABCDEFGHIJKLM";
	char r[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (str[i] == l[j])
			{
				str[i] = r[j];
			}
		}
	}

	return (str);
}
