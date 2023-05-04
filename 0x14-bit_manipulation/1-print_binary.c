#include "main.h"

/**
 * print_binary - prints a binary number
 * @n: number to be represented in binary
 * Return: empty
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}

_putchar('0' + (n & 1));
}
