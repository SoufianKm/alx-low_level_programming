#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * This program should print
 * the first 98 fibonacci sequence number
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	unsigned long previous_nbr = 0, current_nbr = 1, res;
	int counter = 0;

	while (counter <= 98)
	{
		res = previous_nbr + current_nbr;
		printf("%lu", res);

		if (counter <= 97)
			printf(", ");

		previous_nbr = current_nbr;
		current_nbr = res;
		counter++;
	}
	printf("\n");

	return (0);
}
