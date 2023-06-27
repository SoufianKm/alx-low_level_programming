#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _atoi - convert string to an int
 * @s : pointer char parameter
 */
int _atoi(char *s)
{
	int i, l, res = 0;

	l = strlen(s);
	for (i = 0; i <=l; i++)
	{
		if (((s[i] == '-') && isdigit(s[i + 1])) || isdigit(s[i]))
		{
			res = atoi(&s[i]);
			break;
		}
	}

			return (res);
}
