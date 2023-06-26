#include "main.h"
#include <stdio.h>

/**
 * swa_int - swaps values of two parameters
 * @a : integer parameter
 * @b : integer parameter
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
