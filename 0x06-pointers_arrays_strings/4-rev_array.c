#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse an array content
 * @a: pointer integer parameter
 * @n: pointer integer parameter
 */
void reverse_array(int *a, int n)
{
	int i, p;

	for (i = 0; i < n--; i++)
	{
		p = a[i];
		a[i] = a[n];
		a[n] = p;
	}
}
