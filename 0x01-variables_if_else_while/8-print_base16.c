#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * this program should prints the numbers
 * of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex;

	for (hex = 0; hex < 16; hex++)
	{
		if (hex < 10)
			putchar('0' + hex);
		else
			putchar('a' + (hex % 10));
	}
	putchar('\n');
	return (0);
}
