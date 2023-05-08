#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: the name of the file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buff;

if (filename == NULL)
{
return (0);
}

fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}

buff = malloc(sizeof(char) * letters);

letters = read(fd, buff, letters);

if ((size_t)write(STDOUT_FILENO, buff, letters) != letters)
{
return (0);
}

close(fd);
free(buff);
return (letters);
}
