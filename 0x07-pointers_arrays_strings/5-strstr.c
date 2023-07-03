#include "main.h"
#include <string.h>

/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack.
 * @haystack: char pointer parameter
 * @needle: char pointer parameter
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	return (strstr(h, needle));
}
