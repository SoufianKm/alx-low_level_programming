#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * This program should print
 * the sum of all multiples
 * of 1024
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i, res = 0;

	for (i = 0; i <= 1024 ; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}
