#include "main.h"
/**
 * *_memset - fills memory with constant byte
 * @s: memory area to be replaced
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; n > 0; i++)
{
n--;
s[i] = b;
}
return (s);
}
