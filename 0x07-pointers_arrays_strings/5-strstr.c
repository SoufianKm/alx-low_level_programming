#include "main.h"
#include <string.h>

/**
 * _strstr - locate a substring 
 * @haystack: char pointer parameter
 * @needle: char pointer parameter
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	haystack = strstr(haystack, needle);
	return (haystack);
}
