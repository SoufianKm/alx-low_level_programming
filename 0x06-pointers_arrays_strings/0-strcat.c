#include "main.h"
#include <string.h>

/**
 * _strcat - concantenates two strings
 * @dest: pointer char parameter
 * @src: pointer char parameter
 * Return: resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	dest = strcat(dest, "");
	return (dest);
}
