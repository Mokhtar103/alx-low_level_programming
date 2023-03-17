#include <stdlib.h>
#include <stdio.h>
/**
* main - a program which print the numbers
* Return: 0(Success)
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
    }
	return (0);
}

