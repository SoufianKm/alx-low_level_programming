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
	unsigned int res = 0;
	int i;

	if (argc < 2)
		printf("%d\n", res);
	else
	{
		for (i = 1; i < argc; i++)
		{
			unsigned long int j = 0;

			while (j < strlen(argv[i]))
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}

				j++;
			}

			if (atoi(argv[i]) < 0)
			{
				printf("Error\n");
				return (0);
			}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}

	return (0);
}
