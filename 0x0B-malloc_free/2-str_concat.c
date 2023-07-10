#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * concat - concatenates two string
 * @s1: first string
 * @s2: seconde string
 * @c: char parameter
 * @l: size of memory of strings
 * @res: results of concatenation
 */
void concat(char *s1, char *s2, char *c, unsigned int l, char *res)
{
	unsigned int i = 0, j = 0;

	if (s1 != NULL && s2 != NULL)
	{
		while (i < strlen(s1))
		{
			res[i] = s1[j];
			i++;
			j++;
		}
		j = 0;
		while (j < strlen(s2))
		{
			res[i] = s2[j];
			j++;
			i++;
		}
	}
	else
	{
		while (i < l)
		{
			res[i] = c[i];
			i++;
		}

	}

	res[l] = '\0';
}

/**
 * str_concat - concatenates two string
 * @s1: first string
 * @s2: seconde string
 * Return: the contents of s1 followed by the contents
 * of s2, and null terminated, return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *res, *c = NULL;
	unsigned int l = 0;

	if (s1 == NULL && s2 == NULL)
		res = '\0';
	else if (s1 == NULL && s2 != NULL)
	{
		l += strlen(s2);
		c = s2;
	}
	else if (s1 != NULL && s2 == NULL)
	{
		l += strlen(s1);
		c = s1;
	}
	else
	{
		l += strlen(s1) + strlen(s2);
	}

	res  = malloc(sizeof(char) * (l + 1));
	if (res == NULL)
		return (NULL);

	concat(s1, s2, c, l, res);

	return (res);
}
