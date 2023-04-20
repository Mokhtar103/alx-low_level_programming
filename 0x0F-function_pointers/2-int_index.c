#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer to be executed
 * Return: empty
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && size && cmp)
{
i = 0;
while (i < size)
{
if (cmp(array[i]) != 0)
{
return (i);
}
i++;
}
}
return (-1);
}
