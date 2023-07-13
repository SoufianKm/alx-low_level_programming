#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings from n number
 * @s1: first string
 * @s2: seconde string
 * @n: number of bytes from s2 to concatenates to s1
 * Return: pointer to resulting string, NULL if s1 or
 * s2 is NULL or program fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int l1 = 0, l2 = 0, l = 0, i, j;

	while (s1 && s1[l1])
		l1++;

	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		l += l1 + n;
	else
	{
		n = l2;
		l += l1 + l2;
	}

	res = malloc(sizeof(char) * (l + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		res[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		res[i] = s2[j];
		i++;
	}
	res[i] = '\0';

	return (res);
}
