#include "variadic_functions.h"

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
	char *str;

	i = 0;
	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str)
				printf("%s", str);
			if (!str)
				printf("(nil)");
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
