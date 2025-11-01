#include "main.h"
#include <stdio.h>

/*
* print_triangle - prints a triangle of a given size
* @size: size of the triangle
*/



void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			putchar(' ');

		for (k = 1; k <= i; k++)
			putchar('#');

		putchar('\n');
	}
}
