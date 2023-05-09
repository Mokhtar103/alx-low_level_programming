#include "main.h"
#include <stdlib.h>

void check_arg(int ac);
void close_file(int fd);

/**
 * check_arg - check the count of args
 * @ac: arguments count
 */
void check_arg(int ac)
{
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
}
/**
 * close_file - check the count of args
 * @fd: file descriptor
 */
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - Copies the contents of a file to another file
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 on success
 *
 */
int main(int argc, char **argv)
{
	int from, to, nr;
	char buffer[1024];

	check_arg(argc);
	to = open(argv[2], O_WRONLY | O_TRUNC);
	if (to == -1)
		to = open(argv[2], O_WRONLY | O_CREAT, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	while ((nr = read(from, buffer, 1024)))
	{
		if (nr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_file(from);
			close_file(to);
			exit(98);
		}
		if (nr != write(to, buffer, nr))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(from);
			close_file(to);
			exit(99);
		}

	}
	close_file(from);
	close_file(to);
	return (0);
}
