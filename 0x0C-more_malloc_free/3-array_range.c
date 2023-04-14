#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range -  creates an array
 * @min: start of the array
 * @max: end of the array
 * Return: pointer to arr
 */
int *array_range(int min, int max)
{
int size, i;
int *arr;

if (min > max)
{
return (NULL);
}
size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr = 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = min;
min++;
}
return (arr);
}
