#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n = 0;
	int i;

	while (str[n] != '\0')
		n++;

	if (n % 2 == 0)
		i = n / 2;
	else
		i = (n + 1) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
