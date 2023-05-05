#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: pointer to num
 * @index: given index
 *
 * Return: 1 if worked otherwise 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= 64)
return (-1);

if (*n & 1L << index)
{
*n ^= 1L << index;
}
return (1);
}
