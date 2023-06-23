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
	long previous_nbr = 0, current_nbr = 1, res;
	int counter = 0;

	while (counter <= 98)
	{
		res = previous_nbr + current_nbr;
	
		if (res < 0)
			printf("%ld", res * (-1));
		else
			printf("%ld", res);
		
		if (counter <= 97)
			printf(", ");

		previous_nbr = current_nbr;
		current_nbr = res;
		counter++;
	}
	printf("\n");

	return (0);
}
