#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _memset -  fills memory with constant byte
 * @s: string that will be filled
 * @b: character to be filled
 * @n : number of repition of b
 * Return: pointer to char s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
 * _calloc -  allocates memory for an array
 * @nmemb: number of elements
 * @size: size for each element
 * Return: empty
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *c;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
c = malloc(size * nmemb);
if (c == NULL)
{
return (NULL);
}
_memset(c, 0, nmemb * size);
return (c);
}
