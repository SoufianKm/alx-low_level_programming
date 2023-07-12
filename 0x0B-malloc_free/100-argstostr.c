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
	int i, j;
	char **res;

	if (ac == 0 || av == NULL)
		return (NULL);

	res = (char **) malloc(sizeof(char *) * ac);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		res[i] = (char *) malloc(sizeof(char) * (strlen(av[i]) + 1));
		if (res[i] == NULL)
		{
			free(res);
			for (j = 0; j <= i; j++)
				free(res[j]);
			return (NULL);
		}
	}

	for (i = 0; i < ac; i++)
	{
		int l = strlen(av[i]);

		av[i][l] = '\n';
		res[i] = av[i];
	}
	return (*res);
}
