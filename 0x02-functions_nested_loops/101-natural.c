#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_times_table - print the n time table
 * @n: integer parameter
 */
int main(void)
{
	int i, res = 0;

        for (i = 0; i <= 1024 ; i++)
                if (i % 3 == 0 || i % 5 == 0)
                        res += i;
	printf("The sum of these multiples is %d\n", res);
}
