#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * This program will prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 *
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				l = k + 1;
				while (l < 10)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if (j < 8)
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
