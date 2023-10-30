#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to get length
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	if (!s)
		return (0);

	while (*s++)
		count++;
	return (count);
}

/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success, -1 on failure or filename is NULL, an
 * empty file if text_content is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (l)
		bytes = write(fd, text_content, l);
	close(fd);
	return (bytes == l ? 1 : -1);
}
