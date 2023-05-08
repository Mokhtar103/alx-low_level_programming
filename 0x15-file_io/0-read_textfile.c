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
char *text;
ssize_t fd, l, w;

if (filename == NULL)
{
return (0);
}
text = malloc(sizeof(char) * letters);
if (text == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
l = read(fd, text, letters);
w = write(STDOUT_FILENO, text, l);

if (l == -1 || w == -1 || w != l)
{
return (0);
}
free(text);
close(fd);

return (w);

}
