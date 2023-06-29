#include "main.h"
#include <string.h>

/**
 * _strncat - concantenates two strings
 * using at most n bytes from src
 * @dest: pointer char parameter
 * @src: pointer char parameter
 * Return: resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	dest = strcat(dest, "");
	return (dest);
}
