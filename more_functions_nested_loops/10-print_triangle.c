#include "main.h"
#include <stdio.h>

/*
* print_triangle - prints a triangle of a given size
* @size: size of the triangle
*/

void print_triangle(int size)

/* Function to print a triangle of given size */

{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
