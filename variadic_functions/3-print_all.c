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
	int printed;

	i = 0;
	printed = 0;
	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			if (printed)
				printf(", ");
			printf("%c", va_arg(args, int));
			printed = 1;
			break;
		case 'i':
			if (printed)
				printf(", ");
			printf("%d", va_arg(args, int));
			printed = 1;
			break;
		case 'f':
			if (printed)
				printf(", ");
			printf("%f", va_arg(args, double));
			printed = 1;
			break;
		case 's':
			if (printed)
				printf(", ");
			print_s(args);
			printed = 1;
			break;
		}
		i++;
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
