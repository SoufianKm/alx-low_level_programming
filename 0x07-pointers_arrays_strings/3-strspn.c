#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: char pointer parameter
 * @accept: char pointer parameter
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
char _strspn(char *s, char *accept)
{
	s = strspn(s, accept);

	return (s);
}
