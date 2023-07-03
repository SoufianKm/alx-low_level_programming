#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: char pointer parameter
 * @accept: char pointer parameter
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
int _strspn(char *s, char *accept)
{
	unsigned int l = 0;

	l = strspn(s, accept);

	return (l);
}
