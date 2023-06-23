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
	int p_f = 0, i = 2;

       	long n = 612852475143;
	
	do {
		if (n % i == 0)
		{
			n /= i;
		}
		
		if (i > p_f)
		{
			p_f = i;
		}
		
		if (n % i == 0)
		{
			i = 2;
		}
		else
		{
			i++;
		}
	} while (n > 1);
	
	printf("%d\n", p_f);

	return (0);
}
