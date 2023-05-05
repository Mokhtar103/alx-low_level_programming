#include "main.h"

/**
 * flip_bits - return number of bits to change
 * @n: first num
 * @m: second num
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i, fl;

i = 64;
fl = 0;
while (i--)
{
if ((n & 1) != (m & 1))
fl++;
n >>= 1;
m >>= 1;
}
return (fl);
}
