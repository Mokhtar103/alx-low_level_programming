#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: first string
 * @src: second string
 * @n : number of bytes
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int c, i;

c = 0;
while (dest[c])
{
c++;
}
for (i = 0; i < n && src != '\0'; i++)
{
dest[c + i] = src[i];
}
dest[c + i] = '\0';
return (dest);
}
