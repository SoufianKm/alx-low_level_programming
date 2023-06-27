#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _atoi - convert string to an int
 * @s : pointer char parameter
 * Return: number converted, 0 if no number digit found
 */
int _atoi(char *s)
{
	int i, l, sign = 1;

	l = strlen(s) - 1;
	for (i = 0; i <= l; i++)
	{
		if (isdigit(s[i]))
			break;

		if (i == 0 && !isspace(s[i]) && s[i] == '-')
			sign = -sign;
		else
			sign =  sign;

		if (!isspace(s[i + 1]) && s[i + 1] == '-')
			sign *= (-1);
		else if (!isspace(s[i + 1]) && s[i + 1] == '+')
			sign *= 1;
	}

	return (atoi(&s[i]) * sign);
}
