#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: length of the string
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}
