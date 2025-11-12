#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: The number of columns in the grid.
 * @height: The number of rows in the grid.
 *
 * Each element of the grid is initialized to 0.
 * The function returns a pointer to the grid, or NULL if width
 * or height is 0 or negative, or if memory allocation fails.
 *
 * Return: Pointer to the allocated grid, or NULL on failure.
 */

 char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1 = 0, len2 = 0;
	size_t i = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
		len1 = i;
	}
	i = 0;
	if (s2 != NULL)
	{
		while (s2[i] != '\0')
			i++;
		len2 = i;
	}
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			result[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[i - len1] != '\0')
		{
			result[i] = s2[i - len1];
			i++;
		}
	}
	result[i] = '\0';
	return (result);
}
