#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the first element of an integer array
 * @size: Number of elements in the array
 * @action: Pointer to a function that takes an int and returns void
 *
 * Description: Iterates through the array and applies the action function
 * to each element. Returns early if array or action pointer is NULL.
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
