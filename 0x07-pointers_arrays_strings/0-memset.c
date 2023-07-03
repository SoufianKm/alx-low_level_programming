#include "main.h"

/**
 * _memset - fills memory with contstant byte
 * @s: char pointer parameter
 * @b: char pointer parameter
 * @n: unsigned int parameter
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
