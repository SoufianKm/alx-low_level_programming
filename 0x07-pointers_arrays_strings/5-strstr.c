#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack
 * @haystack: char pointer parameter
 * @needle: char pointer parameter
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
