#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print from n to 98
* @n: number to start with
* Return: empty output
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
		putchar('\n');
	}
	else if (n > 98)
	{
		int j;

		for (j = n; j >= 98; j--)
		{
			if (j == 98)
			{
				printf("%d", j);
			}
			else
			{
				printf("%d, ", j);
			}
			
		}
		putchar('\n');
	} 
	else
	{
		printf("%d", 98);
		putchar('\n');
	}
}
