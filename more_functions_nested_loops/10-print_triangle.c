#include "main.h"
#include <stdio.h>

void print_triangle(int size)

/**
 * void print_triangle - prints a triangle of size 'size' using '#'
 * @size: size of the triangle
 * Return: void
 */

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
