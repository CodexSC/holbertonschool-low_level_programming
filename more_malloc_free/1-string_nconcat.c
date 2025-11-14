#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings with limited bytes from second
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to concatenate from s2
 *
 * Return: Pointer to newly allocated memory containing s1 + first n bytes of s2
 *         Returns NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, i;

	/* Calculate length of s1 manually (treat NULL as empty) */
	len1 = 0;
	if (s1)
	{
		while (s1[len1])
			len1++;
	}

	/* Calculate length of s2 manually (treat NULL as empty) */
	len2 = 0;
	if (s2)
	{
		while (s2[len2])
			len2++;
	}

	/* If n is greater than or equal to len2, use entire s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string */
	result = malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);

	/* Copy s1 into result */
	i = 0;
	if (s1)
	{
		while (s1[i])
		{
			result[i] = s1[i];
			i++;
		}
	}

	/* Copy first n bytes of s2 */
	if (s2)
	{
		unsigned int j = 0;

		while (j < n)
		{
			result[i] = s2[j];
			i++;
			j++;
		}
	}

	/* Null terminate */
	result[i] = '\0';

	return (result);
}
