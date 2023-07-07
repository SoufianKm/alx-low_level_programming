#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of array
 * @argv: array of arguments
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);

	return (0);
}
