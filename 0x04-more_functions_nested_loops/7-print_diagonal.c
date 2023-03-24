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
for (j = 1; j <= n; j++)
{
if (i == j)
{
putchar(92);
}
else
{
putchar(' ');
}
}
putchar('\n');
}
}
}
