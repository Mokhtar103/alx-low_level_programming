#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be searched for a character
 * @c: character to be located
 * Return: pointer to character if found otherwise null
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0'); /* Null character */
}
