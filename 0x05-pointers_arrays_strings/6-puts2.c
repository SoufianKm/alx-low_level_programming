#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str : pointer char parameter
 */
void puts2(char *str)
{
	int l = strlen(str) - 1, i;

	for (i = 0; i < l; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
