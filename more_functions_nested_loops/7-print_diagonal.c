#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line of backslashes
 * @n: number of times to print the diagonal
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
}
