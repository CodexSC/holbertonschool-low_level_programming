#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @separator: String to be printed between the strings
 * @n: Number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *current_string;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(args, char *);

		if (current_string == NULL)
			printf("(nil)");
		else
			printf("%s", current_string);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
