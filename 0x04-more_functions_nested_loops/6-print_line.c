#include <stdio.h>
#include "main.h"

/**
* print_line - draws straight line in the terminal
* @n : the number that straight line will be terminated at
* Return: empty
*/
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar(95);
}
}
_putchar('\n');
}
