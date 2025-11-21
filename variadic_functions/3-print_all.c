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
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				print_s(args);
				break;
		}
		i++;
		if (format[i] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
	}

	va_end(args);
	printf("\n");
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
