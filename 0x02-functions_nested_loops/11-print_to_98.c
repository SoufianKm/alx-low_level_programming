#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - print from number given
 * to 98
 *
 * @n: integer paramter given
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");
		}
		printf("\n");
	} else if (n <= 98){
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");

	}
		printf("\n");
	}
}
