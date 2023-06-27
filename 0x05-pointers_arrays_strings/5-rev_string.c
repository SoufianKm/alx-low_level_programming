#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - print word in reverse
 * @s : pointer char parameter
 */
void rev_string(char *s)
{
	int l = strlen(s) - 1, i = 0;
	char tmp;

	for (i = l; i >= l/2; i--)
	{
		tmp = s[i];
		s[i] = s[l - i];
		s[l - i] = tmp;
	}
}
