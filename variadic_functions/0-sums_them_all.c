#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all its parameters
 * @n: Number of parameters
 *
 * Return: The sum of all parameters
 */

int sum_them_all(const unsigned int, ...)
{
va_list args;
unsigned int i;
int sum;

va_start(args, n);
sum = 0;

for (i = 0; i < n; i++)
{
sum = sum + va_arg(args, int);
}

va_end(args);
return(sum);
}
