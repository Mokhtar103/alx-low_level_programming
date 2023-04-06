#include "main.h"
/**
 * is_prime - check if the number is prime
 * @n: number to be checked
 * @value : value bigger than n
 * Return: 1 if prime 0 otherwise
 */
int is_prime(int n, int value)
{
if (value >= n && n > 1)
{
return (1);
}
else if (n % value == 0 || n <= 1)
{
return (0);
}
else
{
return (is_prime(n, value + 1));
}
}
/**
 * is_prime_number - check for a prime number
 * @n : number to be checked
 * Return: 1 if prime otherwise 0
 */
int is_prime_number(int n)
{
return (is_prime(n, 2));
}
