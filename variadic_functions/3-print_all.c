#include "variadic_functions.h"

void print_c(va_list args);
void print_i(va_list args);
void print_f(va_list args);
void print_s(va_list args);

/**
 * print_all - Prints anything
 * @format: Format string specifying argument types
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;

	i = 0;
	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_c(args);
				break;
			case 'i':
				print_i(args);
				break;
			case 'f':
				print_f(args);
				break;
			case 's':
				print_s(args);
				break;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}

	va_end(args);
	printf("\n");
}

/**
 * print_c - Prints a char
 * @args: va_list
 *
 * Return: void
 */
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_i - Prints an int
 * @args: va_list
 *
 * Return: void
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_f - Prints a float
 * @args: va_list
 *
 * Return: void
 */
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_s - Prints a string
 * @args: va_list
 *
 * Return: void
 */
void print_s(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (!str)
		str = "(nil)";
	printf("%s", str);
}
