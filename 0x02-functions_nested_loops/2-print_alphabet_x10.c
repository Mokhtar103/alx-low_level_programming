#include "main.h"
/**
* print_alphabet_x10 - print alphabet in lowercase 10 times
* Return: void
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

