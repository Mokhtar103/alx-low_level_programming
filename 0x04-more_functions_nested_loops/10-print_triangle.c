#include <stdio.h>
#include "main.h"
/**
* print_triangle - draws triangle in the terminal
* @size : the number where triangle terminates
* Return: empty
*/
void print_triangle(int size)
{
int i, j, z;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = size - i; j > 1; j--)
{
_putchar(' ');
}
for (z = 0; z <= i; z++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
