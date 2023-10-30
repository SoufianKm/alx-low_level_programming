#include "main.h"

/**
 * _strlen - return length of a string
 * @s: string given
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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to append
 * @text_content: string to add
 *
 * Return: 1 on success, -1 on failure or if filename is NULL
 * or if the file does not exist or if you do not have
 * the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (l)
		bytes = write(fd, text_content, l);
	close(fd);
	return (bytes == l ? 1 : -1);
}
