#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: char pointer parameter
 * @src: char pointer parameter
 * @n: unsigned int parameter
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char src, unsigned int n)
{
	dest = memcpy(dest, src ,n);
	return (dest);
}
