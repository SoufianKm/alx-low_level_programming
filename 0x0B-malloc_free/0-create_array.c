#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: size of array
 * @c: initialisation character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a = malloc(sizeof(char) * size);

	if (a == NULL || size == 0)
		return (NULL);

	while (i++ < size)
		a[i] = c;

	return (a);
}
