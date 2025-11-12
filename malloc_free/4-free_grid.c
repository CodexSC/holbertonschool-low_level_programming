#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - Frees a 2D array of integers
 * @grid: Pointer to the 2D array to free
 * @height: Height of the grid (number of rows)
 *
 * Description: Frees all memory allocated for a 2D array previously
 * created by alloc_grid. Frees each row first, then the grid itself.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL)
return;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
