#include "main.h"
#include <stdio.h>

/**
 * main - prints the program name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
    int i = 0;
    (void)argc;

    while (argv[0][i])
    {
        _putchar(argv[0][i]);
        i++;
    }
    _putchar('\n');
    return 0;
}
