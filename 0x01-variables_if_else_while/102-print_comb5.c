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
			l = j + 1;
			for (k = i; k < 10; k++)
			{
				while (l < 10)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if (i == 9 && j == 8 && k == 9 && l == 9)
						break;
					putchar(',');
					putchar(' ');
					l++;
				}
				l = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
