#include "main.h"

unsigned int _pow(int base, int pow);

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

*n = *n + _pow(2, index);
return (1);
}

/**
 * _pow - return the power of given num
 * @base: base
 * @pow: power
 * Return: power of given num
 */
unsigned int _pow(int base, int pow)
{

if (pow == 0)
{
return (1);
}

if (pow == 1)
{
return (base);
}

while (--pow)
{
base *= base;
}

return (base);
}
