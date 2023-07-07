#include <stdio.h>
#include <stdlib.h>

/**
 * res_coin - calculate the min number of coins
 * @min: results of calcualtion
 * @c: coin given
 * Return: 1 if coin equal to 1, else returns the min
 */
int res_coin(int min, int c)
{
	int i, coin[5] = {25, 10, 5, 2, 1};

	if (c == 1)
		return (1);

	for (i = 0; i < 5; i++)
	{
		if (c >= coin[i])
		{
			if (c % coin[i] == 0)
			{
				min += c / coin[i];
				break;
			}
			else
			{
				min++;
				c %= coin[i];
			}
		}
	}

	return (min);

}
/**
 * main - Entry point
 * @argc: size of array
 * @argv: array of arguments
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{
	int res = 0;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[argc - 1]) < 0)
		{
			printf("%d\n", res);
			return (0);
		}
		else
		{
			res = res_coin(res, atoi(argv[argc - 1]));
			printf("%d\n", res);
		}
	}

	return (0);
}
