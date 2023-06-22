#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * This program should print
 * the fibonacci sequence to number 50
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int f = 1, res = 0;

	while (f <= 50)
	{
		res = f;
		printf("%d", f);
		if (f < 50)
			printf(", ");
		f += res;
	}
	return (0);
}
