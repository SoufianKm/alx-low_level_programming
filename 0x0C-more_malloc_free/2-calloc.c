#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: number of size of bytes
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;

	if (nmemb == 0 || size == 0)
		return (NULL);

	res = calloc(nmemb, size);
	if (!res)
		return (NULL);

	return (res);
}
