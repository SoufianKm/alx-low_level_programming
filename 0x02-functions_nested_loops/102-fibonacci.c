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
	long previous_nbr = 0, current_nbr = 1, res;
	int counter = 0;

	while (counter < 50)
	{
		res = previous_nbr + current_nbr;
		printf("%ld", res);

		if (counter < 49)
			printf(", ");

		previous_nbr = current_nbr;
		current_nbr = res;
		counter++;
	}
	printf("\n");

	return (0);
}
