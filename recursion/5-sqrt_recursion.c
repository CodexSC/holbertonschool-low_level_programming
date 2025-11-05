#include "main.h"
#include <stdio.h>

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root
 * of a number using recursion
 * @n: the number to find the square root of
 *
 * Return: natural square root of n, or -1
 * if n does not have a natural square root
 *
 * Description: Uses a helper function
 * to recursively find the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - helper function to find square root using recursion
 * @n: the number to find the square root of
 * @i: the current number being tested
 *
 * Return: natural square root of n, or -1 if not found
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	return (_sqrt_helper(n, i + 1));
}
