#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: a pointer to a string
 *
 * Return: 1 on success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fp, w;
int len = 0;

if (filename == NULL)
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
fp = open(filename, O_WRONLY | O_APPEND);
w = write(fp, text_content, len);

if (fp == -1 || w == -1)
{
return (-1);
}

close(fp);
return (1);
}
