#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: a pointer to a string
 *
 * Return: 1 on success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
int fp, w;
int len = 0;

if (filename == 0)
{
return (-1);
}
if (text_content != NULL)
{
while (text_content[len])
{
len++;
}
}
fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fp, text_content, len);

if (fp == -1 || w == -1)
{
return (NULL);
}

close(fp);

return (1);
}
