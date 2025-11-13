#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Description: Allocates memory of @b bytes using malloc.
 * If malloc fails, the program exits with status code 98.
 *
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)

{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
	exit(98);
return (ptr);
}
