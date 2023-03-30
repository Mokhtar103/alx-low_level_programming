#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: pointer to array
 * @n: size of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i, j, temp;


for (i = n - 1, j = 0; j < i; j++, i--)
{
temp = a[j];
a[j] = a[i];
a[i] = temp;
}
}
