#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
