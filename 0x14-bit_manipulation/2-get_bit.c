#include "main.h"

/**
 * get_bit - return bit of given index
 * @n: number to be searched
 * @index: index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int value;

if (index >= 64)
{
return (-1);
}
value = (n >> index) & 1;

return (value);
}
