#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b that is not 0,
 * or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int nbr_dec = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		nbr_dec = 2 * nbr_dec + (b[i] - '0');
	}

	return (nbr_dec);
}