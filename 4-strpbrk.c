#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string to search
 * @accept: Pointer to the string of characters to match
 *
 * Return: Pointer to the first character in s that
 * matches any character in accept,
 *         or NULL if no match is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
