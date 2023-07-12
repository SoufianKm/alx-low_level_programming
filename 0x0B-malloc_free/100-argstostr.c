#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: size of an array
 * @av: array of arguments
 * Return: NULL if ac == 0 or av == NULL or fails, else
 * returns a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l;
	char *res;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int) strlen(av[i]) - 1; j++)
			l++;
	}

	res = malloc(sizeof(char) * (l + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			res[k] = av[i][j];
			k++;
		}
		res[k] = '\n';
		k++;
	}

	return (res);
}
