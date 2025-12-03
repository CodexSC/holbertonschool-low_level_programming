#include "main.h"

/**
 * print_string - prints a string followed by a newline
 * @str: string to print
 */
void print_string(char *str)
{
    int i = 0;

    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}

/**
 * main - prints all arguments received
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
    int i;

    for (i = 0; i < argc; i++)
    {
        print_string(argv[i]);
    }

    return 0;
}
