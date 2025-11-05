#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
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
