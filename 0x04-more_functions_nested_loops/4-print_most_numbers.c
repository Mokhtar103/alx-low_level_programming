#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - print numbers from 0 to 9 excpet 2 & 4
* Return: empty
*/
void print_most_numbers(void)
{
int i;

for (i = 48; i < 58; i++)
{
if (i == 50 || i == 52)
{
continue;
}
putchar(i);
}
putchar('\n');
}
