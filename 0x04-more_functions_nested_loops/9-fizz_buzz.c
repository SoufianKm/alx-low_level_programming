#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * this program should prints the numbers from 1 to 100
 * for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz. For numbers
 * which are multiples of both three and five print FizzBuzz
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((n % 3 == 0) && (n % 5 != 0))
		{
			printf("Fizz");
		}
		else if ((n % 5 == 0) && (n % 3 != 0)) 
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		
		if (n == 100)
		{
			break;
		}
		printf(" ");
	}
	printf("\n");
	
	return (0);
}
