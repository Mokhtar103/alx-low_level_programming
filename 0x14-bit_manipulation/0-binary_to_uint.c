#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned
 * @b: pointer to a string of 0 and 1
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int n = 0;

if (b == NULL)
{
return (0);
}
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}
n = n * 2 + (b[i] - '0');
}
return (n);
}
