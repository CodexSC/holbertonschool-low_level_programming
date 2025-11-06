#include "main.h"
#include <stdio.h>

int _is_prime_helper(int n, int i);

/**
 * is_prime_number - returns 1
 * if the input integer is a prime number, otherwise 0
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (_is_prime_helper(n, 2));
}

/**
 * _is_prime_helper - helper function to check
 * if number is prime using recursion
 * @n: the number to check
 * @i: the current divisor being tested
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (_is_prime_helper(n, i + 1));
}
