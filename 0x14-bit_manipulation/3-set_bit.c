#include "main.h"

/**
 * set_bit - set value of bit to 1
 * @n: pointer to num
 * @index: given index
 * Return: 1 if worked otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}

return (!!(*n |= 1L << index));
}
