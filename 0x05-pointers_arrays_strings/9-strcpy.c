#include "main.h"
#include <stdio.h>

/**
 * _strcpy -cpoy string pointed by src
 * @s : pointer char parameter
 */
char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);

	return (dest);
}
