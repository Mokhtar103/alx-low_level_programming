#include "main.h"

/**
 * print_binary - prints a binary number
 * @n: number to be represented in binary
 * Return: empty
 */
void print_binary(unsigned long int n)
{
int i, printed = 0;
unsigned long int num;

for (i = 63; i >= 0; i--)
{
num = n >> i;

if (num & 1)
{
_putchar('1');
printed++;
}
else if (printed)
{
_putchar('0');
}
if (printed == 0)
{
_putchar('0');
}
}
}
