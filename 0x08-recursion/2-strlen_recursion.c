#include "main.h"
/**
 * _strlen_recursion - return the length of string
 * @s : string
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
