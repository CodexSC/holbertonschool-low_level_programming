#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence
 * of the substring needle in haystack
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning
 * of the located substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
			{
				j++;
			}

			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}

	return (NULL);
}
