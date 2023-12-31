#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * This program will assign a random number
 * to the variable n each time it is executed
 *
 * Return: Always 0 (Success)
 *
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = (n % 10);
	if (last_digit  == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (last_digit < 6 && last_digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
