#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * times_table - print the 9 time table
 */
void print_times_table(int n)
{
	int i, j, res = 0;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			res = i * j;
			if (j == 0)
				printf("%d", res);
			else
				printf("%4d", res);
			if (j > 8)
				break;
			printf(",");
		}
		printf("\n");
	}
}
