#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: can't read from file %s\n"
#define ERR_NOWRITE "Error: can't write to %s\n"
#define ERR_NOCLOSE "Error: can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - Entry point
 * @ac: number of arguments
 * @av: list of arguments
 *
 * Return: 1 on success, 0 on failuer
 */

int main(int ac, char **av)
{
	int from_fd = 0, to_fd = 0;
	ssize_t b;
	char read_buf_size[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((b = read(from_fd, read_buf_size, READ_BUF_SIZE) > b))
		if (write(to_fd, read_buf_size, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	from_fd = close(from_fd);
	to_fd = close(to_fd);
	if (from_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);

	if (to_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);

	return (EXIT_SUCCESS);
}

