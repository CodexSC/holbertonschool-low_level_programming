#include <stdlib.h>
#include <string.h>
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
	unsigned int len1, len2, total_len;

	/* Treat NULL as empty string */
	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;

	/* If n is greater than or equal to len2, use entire s2 */
	if (n >= len2)
		n = len2;

	/* Calculate total length needed (s1 + n bytes from s2 + null terminator) */
	total_len = len1 + n + 1;

	/* Allocate memory for the concatenated string */
	result = malloc(total_len);
	if (result == NULL)
		return (NULL);

	/* Copy s1 into result */
	if (s1)
		strcpy(result, s1);
	else
		result[0] = '\0';

	/* Concatenate first n bytes of s2 */
	if (s2)
		strncat(result, s2, n);

	return (result);
}
