#include "main.h"
#include <stdio.h>


/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */

void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}

/**
 * main - multiplies two numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
    int num1, num2, result;

    if (argc != 3)
    {
        char *error = "Error\n";
        int i = 0;
        while (error[i])
        {
            _putchar(error[i]);
            i++;
        }
        return 1;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    result = num1 * num2;

    print_number(result);
    _putchar('\n');

    return 0;
}
