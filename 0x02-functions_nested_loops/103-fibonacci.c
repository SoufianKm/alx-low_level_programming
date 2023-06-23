#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * This program should find and print
 * the sum of the even valued terms of
 * the fibonacci sequence to number 4000000
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	long previous_nbr = 0, current_nbr = 1, res = 0, sum = 0;
	int counter = 0;

	while (res < 4000000)
	{
		res = previous_nbr + current_nbr;
		if (res % 2 == 0)
			sum += res;

		previous_nbr = current_nbr;
		current_nbr = res;
		counter++;
	}

	printf("%ld\n", sum);

	return (0);
}
