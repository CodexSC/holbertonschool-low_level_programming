#include <stdio.h>
#include "main.h"

/**
 * main - tests print_sign function
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = print_sign(10);
	printf(" -> %d\n", r);

	r = print_sign(0);
	printf(" -> %d\n", r);

	r = print_sign(-5);
	printf(" -> %d\n", r);

	return (0);
}
