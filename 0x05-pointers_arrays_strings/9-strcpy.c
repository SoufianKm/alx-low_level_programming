#include "main.h"
#include <stdio.h>

/**
 * _strcpy - cpoy string pointed by src
 * @dest : pointer char parameter
 * @src : pointer char parameter
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);

	return (dest);
}
