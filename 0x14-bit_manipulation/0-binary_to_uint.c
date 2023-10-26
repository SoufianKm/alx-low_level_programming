#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary parameter
 *
 * Return: converted number, 0 if NULL or there is one or more chars
 * in the string that is not 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		res = res * 2 + (*b++ - '0');
	}

	return (res);
}
