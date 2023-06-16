#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * this program should prints the numbers
 * of base 10 starting from 0 without using
 * any variable of type char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar('0' + digit);
	putchar('\n');
	return (0);
}
