#include <stdio.h>
#include "main.h"
/**
 * _strlen - return the length of string
 * @s: characters to be counted
 * Return: length of string
 */

int _strlen(char* s)
{
int i;

for (i = 0; *s != '\0'; s++)
{
++i;
}
return (i);
}
