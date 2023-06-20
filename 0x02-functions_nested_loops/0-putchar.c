#include "main.h"

/**
 * main - Entry point
 *
 * This program should print "_putchar"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "_putchar\n", sizeof("_putchar") - 1);
	return (0);
}
