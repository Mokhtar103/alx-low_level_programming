#include <stdlib.h>
#include <stdio.h>
/**
* main - a program which print the numbers
* Return: 0(Success)
*/
int main(void)
{
	char ch;

	for (ch = 47; ch < 103; ch++)
	{
		if (ch >= 48 && ch <= 57)
		{
			putchar(ch);
		}
		else if (ch >= 97 && ch <= 102)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}

