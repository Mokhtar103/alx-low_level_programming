#include "main.h"
/**
 * _strspn - get the length of prefix substring
 * @s: string to search on
 * @accept: character to be located
 * Return: number of bytes of s that is the same as accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
{
return (i);
}
}
}
return (i);
}
