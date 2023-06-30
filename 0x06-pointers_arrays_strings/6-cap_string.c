#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer char parameter
 * Return: all words of string capitalised
 */
char *cap_string(char *str)
{
	int i = 0, j = 0, k = 0;
	char sp[] = {',', ';', '.', '!', '?', '\"', '(', ')', '{', '}', '\t', '\n', ' '};

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			i++;
		}
		else
		{
			while (sp[j] != '\0')
			{
				if (str[i] == sp[j])
				{
					if (str[i + 1] == ' ')
					{
						k = i + 2;
					}
					else
					{
						k = i + 1;
					}

					if (str[k] >= 'a' && str[k] <= 'z')
					{
						str[k] -= 32;
					}
					break;
				}
				else
				{
					j++;
				}
			}
			j = 0;
			i++;
		}
	}
	return (str);
}
