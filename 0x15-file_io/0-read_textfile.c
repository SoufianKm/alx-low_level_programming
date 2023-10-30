#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to read
 * @letters: number of letters it should read and print
 *
 * Return: 0 if filename is NULL or the file can not be opened or read
 * or if write fails or does't write the expected amount of bytes,
 * else, return the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char read_buf_size[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &read_buf_size[0], letters);
	bytes = write(STDOUT_FILENO, &read_buf_size[0], bytes);
	close(fd);
	return (bytes);
}
