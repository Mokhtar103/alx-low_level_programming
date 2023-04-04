#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search on
 * @accept: character to be located
 * Return: pointer to s in case of matching otherwise null
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *c;

i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
c = &s[i];
return (c);
}
j++;
}
i++;
}
return ('\0');
}
