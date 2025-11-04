#include <stdio.h>
#include "main.h"

/**
 * main - test print_last_digit function
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = print_last_digit(98);
	printf(" -> %d\n", r);

	r = print_last_digit(0);
	printf(" -> %d\n", r);

	r = print_last_digit(-1024);
	printf(" -> %d\n", r);

	return (0);
}
