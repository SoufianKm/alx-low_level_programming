#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: char parameter
 * @n2: char parameter
 * @r: char parameter
 * @size_r: integer parameter
 * Return: 0 if not stored, else the sum
 */

int *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	
	if ((sizeof(n1 + n2 + '0') / 4) == r)
	{
		return 0;
	}
	else
	{
		return (n1 + n2);
	}
}
