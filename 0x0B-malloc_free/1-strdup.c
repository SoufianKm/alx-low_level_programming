#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter
 * @str: string parameter
 * Return: pointer to the duplicated string.
 * returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int l, i = 0;
	char *res;

	if (str == NULL)
		return (NULL);

	l = strlen(str);
	res = malloc(sizeof(char) * l);
	if (res == NULL)
		return (NULL);

	while (i < l)
	{
		res[i] = str[i];
		i++;
	}

	res[l] = '\0';

	return (res);
}
