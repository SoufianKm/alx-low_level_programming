#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * print a text without using printf or puts function
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, text, sizeof(text) - 1);
	return (1);
}
