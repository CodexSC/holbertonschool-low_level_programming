#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer.
 * @name: Pointer to a character string containing the name to print.
 * @f: Pointer to a function that takes a char pointer as argument
 *     and returns nothing. This function determines how the name
 *     will be printed (e.g., uppercase, lowercase, plain, etc.).
 *
 * Description:
 * This function verifies that both pointers (`name` and `f`) are valid.
 * If either is NULL, the function does nothing. When valid, it calls
 * the function pointed to by @f and passes @name to it for processing.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	/* Check if name or function pointer is NULL; if so, exit safely */
	if (name == NULL || f == NULL)
		return;

	/* Call the function pointed to by f, passing the name as argument */
	f(name);
}
