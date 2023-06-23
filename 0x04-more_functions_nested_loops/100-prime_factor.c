#include <stdio.h>

/**
 * main - Entry point
 *
 * This program should find and print
 * the largest prime factor of a long number
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int prime_factor = 0, i = 2;

       	long n = 612852475143;
	
	do {
		if (n % i == 0)
			n /= i;
		
		if (i > prime_factor)
			prime_factor = i;
		
		if (n % i == 0)
			i = 2;
		else
			i++;
	} while (n > 1);
	
	printf("%d\n", prime_factor);

	return (0);
}
