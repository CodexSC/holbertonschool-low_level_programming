#include "main.h"
#include <stdio.h>

/**
* more_numbers - Prints numbers from 0 to 14, ten times.
*
* This function prints the numbers from 0 to 14 each on a new line,
* repeating this process a total of ten times. The function utilizes
* the _putchar function to output characters, which is limited to
* three calls in total.
*
* Return: void
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)

	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
