#include "main.h"

/**
 * _isdigit - checks if a character is a digit (0 through 9).
 * @c: The integer representation of a character in ASCII.
 *
 * Return: 1 if c is a digit (0-9), 0 otherwise.
 *
 * Description: The parameter c should be an ASCII value of a character
 * that needs to be checked. If c corresponds to a digit (from '0' to '9'),
 * the function returns 1. Otherwise, it returns 0. The function is primarily
 * used to validate character input.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
