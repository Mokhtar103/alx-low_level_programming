#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  free alloc_grid function
 * @grid: pointer to 2d array
 * @height: columns
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
