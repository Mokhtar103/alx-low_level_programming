#include "main.h"
/**
* _abs - computes the absolute value of an integer.
* @c: the number to be computed
* Return: absolute value for a number
*/
int _abs(int c)
{
	int abs_value = 0;

	if (c < 0)
	{
		
		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
