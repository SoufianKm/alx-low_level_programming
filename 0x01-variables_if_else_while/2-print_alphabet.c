#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * this program should prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
