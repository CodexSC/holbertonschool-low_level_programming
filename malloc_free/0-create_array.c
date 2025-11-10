#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it
 * @size: The number of characters to allocate
 * @c: The character to fill the array with
 *
 * Return: Pointer to the array, or NULL if size is 0 or malloc fails
 */

char *create_array(unsigned int size, char c)

{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
