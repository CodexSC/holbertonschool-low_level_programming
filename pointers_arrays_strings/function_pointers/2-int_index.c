#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: Pointer to an integer array
 * @size: Number of elements in the array
 * @cmp: Pointer to a function that compares an integer
 *
 * Return: Index of first element where cmp returns non-zero, or -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Check for NULL pointers */
	if (array == NULL || cmp == NULL)
		return (-1);
	/* Check if size is valid */
	if (size <= 0)
		return (-1);
	/* Loop and check each element */
	for (i = 0; i < size; i++)
	{
		/* Call cmp and check if it returns non-zero */
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
