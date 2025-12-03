#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - Allocates memory for a 2D array of integers
 * @width: Width of the grid (number of columns)
 * @height: Height of the grid (number of rows)
 *
 * Description: Allocates memory for a 2D array where each element
 * is initialized to 0. Returns a pointer to the newly allocated grid.
 * Caller is responsible for freeing the memory.
 *
 * Return: Pointer to 2D array (int **), or NULL on failure
 */

int **alloc_grid(int width, int height)

{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
