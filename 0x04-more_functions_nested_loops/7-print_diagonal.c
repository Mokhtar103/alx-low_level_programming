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
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
