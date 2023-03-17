#include <stdlib.h>
#include <stdio.h>
/**
* main - a program which print the alphabet in lowercase
* Return: 0(Success)
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
