#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * This program will prints all possible
 * combinations of three digits
 *
 * Return: Always 0 (Success)
 *
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}
