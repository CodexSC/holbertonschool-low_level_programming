#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings into a newly allocated string
 * @s1: First string pointer (can be NULL, treated as empty string)
 * @s2: Second string pointer (can be NULL, treated as empty string)
 *
 * Return: Pointer to newly allocated concatenated string, or NULL on failure
 */


char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1 = 0, len2 = 0;
	size_t i = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
		len1 = i;
	}
	i = 0;
	if (s2 != NULL)
	{
		while (s2[i] != '\0')
			i++;
		len2 = i;
	}
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			result[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[i - len1] != '\0')
		{
			result[i] = s2[i - len1];
			i++;
		}
	}
	result[i] = '\0';
	return (result);
}
