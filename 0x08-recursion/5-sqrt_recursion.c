#include "main.h"
/**
 * square - find square root of num
 * @num : number to be square rooted
 * @value : the square root
 * Return: the square root of num
 */
int square(int num, int value)
{
if (value * value == num)
{
return (value);
}
else if (value * value < num)
{
return (square(num, value + 1));
}
else
{
return (-1);
}
}
/**
 * _sqrt_recursion - find the natural square root of n
 * @n : number to be square rooted
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}
