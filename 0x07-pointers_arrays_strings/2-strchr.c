#include "main.h"
#include <string.h>

/**
 * _strchr - locate a character in a string
 * @dest: char pointer parameter
 * @src: char pointer parameter
 * @n: unsigned int parameter
 * Return: pointer to the first occurrence of the character c in the string s
 *         NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	s = strchr(s, c);
	return (s);
}
