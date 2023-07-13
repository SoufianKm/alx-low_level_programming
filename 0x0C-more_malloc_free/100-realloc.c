#include "main.h"
#include <stdlib.h>

/**
 * _realloc - allocates memory for an array, using malloc.
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: a pointer to the allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *res, *old_ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	else if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	res = malloc(new_size);
	if (!res)
		return (NULL);

	old_ptr = ptr;
	if (old_size > new_size)
		for (i = 0; i < new_size; i++)
			res[i] = old_ptr[i];

	else if (old_size < new_size)
		for (i = 0; i < old_size; i++)
			res[i] = old_ptr[i];

	free(ptr);
	return (res);
}
