#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array with n size given
 * @a : pointer integer array parameter
 * @n : integer parameter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			break;

		printf(", ");
	}

	printf("\n");
}
