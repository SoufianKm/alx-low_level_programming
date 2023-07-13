#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings from n number
 * @s1: first string
 * @s2: seconde string
 * @n: number of characters of s2
 * Return: NULL if s1 or s2 is NULL, else return the n string
 * from s2 concatenated with s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int l = 0, i, j;

	if (s1 == NULL || s2 == NULL)
		return ("\0");

	l += strlen(s1);

	if (n < strlen(s2))
		l += n;
	else
		l += strlen(s2); 

	res = malloc(sizeof(char) * (l + 1));

	if (res == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		res[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		res[i] = s2[j];
		i++;
	}
	res[i] = '\0';

	return (res);
}
