#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * This function should print the number
 * with is negative or positive or equal to 0
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
void positive_or_negative(int n)
{
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
}
