#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  allocates memory
 * @b: bytes
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
int *c = malloc(b);

if (c == 0)
{
return (98);
}
return (c);
}
