#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: size of array
 * @argv: array of arguments
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{
	int i, res = 0;

	if (argc < 2)
	{
		printf("%d\n", res);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
				res += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", res);
	}

	return (0);
}
