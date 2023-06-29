#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string
 * @dest: pointer char parameter
 * @src: pointer char parameter
 * @n: integer parameter
 * Return: resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);
	return (dest);
}
