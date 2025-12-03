#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *
 * Description: This function wraps malloc and performs error checking.
 * If malloc fails to allocate memory, the program exits with status code 98.
 * This ensures that the calling code can safely assume memory allocation
 * succeeded without needing to check for NULL.
 */

void *malloc_checked(unsigned int b)

{
int *ptr = malloc(sizeof(b));

if (ptr == NULL)
	exit(98);

return (ptr);
}
