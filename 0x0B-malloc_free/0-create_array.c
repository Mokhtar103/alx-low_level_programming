#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *create_array -  create array of chars
 * @size: size of array
 * @c: characters to be passed
 * Return: pointer to char or null
 */
char *create_array(unsigned int size, char c)
{
char *s;
int i;

s = malloc(size);
if (size == 0 || s == 0)
{
return NULL;
}
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
