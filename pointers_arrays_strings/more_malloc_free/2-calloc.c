#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes to zero
 * @nmemb: Number of elements
 * @size: Size of each element in bytes
 *
 * Return: Pointer to allocated memory initialized to zero, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
