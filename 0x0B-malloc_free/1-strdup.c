#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *_strdup -  return a pinter to new allocated space
 * @str: string to be copied
 * Return: pointer to char or null
 */
char *_strdup(char *str)
{
unsigned int i = 0, len = 0;
char *c;

while (str[len] != '\0')
{
len++;
}
c = malloc((len * sizeof(*str)) + 1);
if (c == 0 || str == 0)
{
return (NULL);
}
else
{
while (i < len)
{
c[i] = str[i];
i++;
}
}
return (c);
}
