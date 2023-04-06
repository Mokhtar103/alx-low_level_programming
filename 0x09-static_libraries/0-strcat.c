#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int c = 0;
int c2;

while (dest[c])
{
c++;
}
for (c2 = 0; src[c2]; c2++)
{
dest[c] = src[c2];
c++;
}
return (dest);
}
