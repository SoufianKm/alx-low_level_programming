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
	int previous_nbr = 0, current_nbr = 1, res;

	while (current_nbr <= 50)
	{
		res = previous_nbr + current_nbr;
		printf("%d", res);

		if (res < 50)
			printf(", ");

		previous_nbr = current_nbr;
		current_nbr = res;

	}
	return (0);
}
