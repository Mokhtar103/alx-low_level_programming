#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * @array: array of integers
 * @size: size of array
 * @action: function pointer to be executed
 * Return: empty
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *last = &array + size - 1;

if (size && array && action)
{
while (array <= last)
{
action(*array++);
}
}
}
