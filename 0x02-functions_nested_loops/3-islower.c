#include "main.h"
/**
* _islower - checks for lowercase character
* Return: int
* c : character that the function will convert to asci num
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
