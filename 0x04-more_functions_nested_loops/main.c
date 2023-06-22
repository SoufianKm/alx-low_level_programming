#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	
    char c, res;

    c = 'A';
   if (c >= 65 && c <= 90)
                res = 1;
        else
                res =0;
    printf("%c: %d\n", c, res);
    c = 'a';
    if (c >= 65 && c <= 90)
                res = 1;
        else
                res =0;
    printf("%c: %d\n", c, res);
    return (0);
}
