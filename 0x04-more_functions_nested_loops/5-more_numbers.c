#include <stdio.h>
#include "main.h"

/**
* more_numbers - print numbers from 0 to 14
* Return: empty
*/
void more_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
int j, num;

for (j = 0; j < 15; j++)
{
num = j;
if (num > 9)
{
_putchar(1 + 48);
num = j % 10;
}
_putchar(num + 48);
}
putchar('\n');
}
}
