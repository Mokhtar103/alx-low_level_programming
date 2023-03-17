#include <stdlib.h>
#include <stdio.h>
/**
* main - a program which print the numbers
* Return: 0(Success)
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--) 
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

