#include <stdio.h>
#include "main.h"

/**
* print_diagonal - draws diagonal in the terminal
* @n : the number that diagonal will be terminated at
* Return: empty
*/
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j < i)
_putchar(' ');
else if (j == i)
_putchar('\\');
}
_putchar('\n');
}
}
}
