#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, num = 0;

    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }

    for (; s[i]; i++)
        num = num * 10 + (s[i] - '0');

    return sign * num;
}

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
 * main - multiplies two numbers from arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
    int num1, num2, result;
    int i;

    if (argc != 3)
    {
        char *error = "Error\n";
        for (i = 0; error[i]; i++)
            _putchar(error[i]);
        return 1;
    }

    num1 = _atoi(argv[1]);
    num2 = _atoi(argv[2]);
    result = num1 * num2;

    print_number(result);
    _putchar('\n');

    return 0;
}
