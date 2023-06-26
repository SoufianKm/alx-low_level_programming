#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values of two parameters
 * @a : pointer integer parameter
 * @b : pointer integer parameter
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
