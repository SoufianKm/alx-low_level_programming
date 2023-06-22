#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * this program should prints the numbers
 * of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		write(1, &digit, 1);
	write(1, "\n", 1);
	return (0);
}
