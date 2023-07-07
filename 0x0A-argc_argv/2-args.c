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
	int count = argc - 1, i;

	for (i = 0; i < count; i++)
		printf("%s\n", argv[i]);

	return (0);
}
