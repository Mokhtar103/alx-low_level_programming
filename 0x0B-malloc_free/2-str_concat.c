#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_len -  return the length of a string
 * @s: string to counted
 * Return: integer
 */

int str_len(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * str_concat -  concat two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new allocated space
 */
char *str_concat(char *s1, char *s2)
{
int sizeOfs1, sizeOfs2, i;
char *c;


if (s1 == NULL)
{
s1 = "\0";
}
if (s2 == NULL)
{
s2 = "\0";
}
sizeOfs1 = str_len(s1);
sizeOfs2 = str_len(s2);

c = malloc((sizeOfs1 + sizeOfs2) *sizeof(char) + 1);
if (c == 0)
{
return (NULL);
}
for (i = 0; i < sizeOfs1 + sizeOfs2; i++)
{
if (i < sizeOfs1)
c[i] = s1[i];
else
c[i] = s2[i - sizeOfs1];
}
c[i] = '\0';
return (c);
}
