#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with limited bytes from second
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to concatenate from s2
 *
 * Return: Pointer to newly allocated memory
 * containing s1 + first n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0;
	char *result;

	if (s1)
		while (s1[len1])
			len1++;
	if (s2)
		while (s2[len2])
			len2++;

	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1);
	if (!result)
		return (NULL);

	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}

	i = 0;
	while (i < n)
	{
		result[len1 + i] = s2[i];
		i++;
	}

	result[len1 + n] = '\0';
	return (result);
}
