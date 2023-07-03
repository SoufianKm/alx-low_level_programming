#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: pointer integer parameter
 * @size: integer parameter
 */
void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0, i;

	for (i = 0; i < size; i++)
	{
		d1 += *(a + ((size + 1) * i));
		d2 += *(a + (((size * (i + 1)) - 1) - i));
	}

	printf("%d, %d\n", d1, d2);
}
