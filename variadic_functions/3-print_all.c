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
				if (format[i + 1] && (format[i + 1] == 'c' || format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's'))
					printf(", ");
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				if (format[i + 1] && (format[i + 1] == 'c' || format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's'))
					printf(", ");
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				if (format[i + 1] && (format[i + 1] == 'c' || format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's'))
					printf(", ");
				break;
			case 's':
				print_s(args);
				if (format[i + 1] && (format[i + 1] == 'c' || format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's'))
					printf(", ");
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
