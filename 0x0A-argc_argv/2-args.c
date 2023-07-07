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
	int count, i;

	if (argc > 1)
	{
		count = argc - 1;
		for (i = 0; i < count; i++)
			printf("%s\n", argv[i]);
	}
	else
		printf("%s\n", argv[0]);

	return (0);
}
