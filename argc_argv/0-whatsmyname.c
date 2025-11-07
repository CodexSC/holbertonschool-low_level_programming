#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (putchar(c));
}

/**
 * main - prints the program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
int i;

(void)argc;  /* Prevent unused parameter warning */

i = 0;
while (argv[0][i] != '\0')
{
_putchar(argv[0][i]);
i++;
}
_putchar('\n');
return (0);
}
