#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * this program should print numbers
 * from 0 to 100 for :
 * numbers divided by 3 will replaced with Fizz
 * numbers devided by 5 will replaced with Buzz
 * numbers devided by 3 and 5 will replaced with FizzBuzz
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if(n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n == 100)
			break;

		printf(" ");
	}
	printf("\n");

	return (0);
}
