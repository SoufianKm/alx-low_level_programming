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

int main(int argc, char *argv[])
{
int file_from, file_to;
int num1 = READ_BUF_SIZE, num2 = 0;
char buf[READ_BUF_SIZE];

if (argc != 3)
	dprintf(STDERR_FILENO, USAGE), exit(97);
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
	dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]);
	exit(98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (file_to == -1)
{
	dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]);
	close(file_from), exit(99);
}
while (num1 == 1024)
{
	num1 = read(file_from, buf, 1024);
	if (num1 == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]);
		exit(98);
	}
	num2 = write(file_to, buf, num1);
	if (num2 < num1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
}

if (close(file_from) == -1)
	dprintf(STDERR_FILENO, ERR_NOCLOSE, file_from), exit(100);

if (close(file_to) == -1)
	dprintf(STDERR_FILENO, ERR_NOCLOSE, file_to), exit(100);

return (0);
}

