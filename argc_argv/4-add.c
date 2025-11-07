#include "main.h"
#include <stdio.h>

/**
 * is_digit_string - checks if a string contains only digits
 * @s: string to check
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit_string(char *s)
{
    int i = 0;

    if (!s || !s[0])
        return 0;

    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
    if (n / 10)
        print_number(n / 10);
    _putchar((n % 10) + '0');
}

/**
 * main - adds positive numbers from command-line arguments
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
    int i, sum = 0;
    int num;

    if (argc == 1)
    {
        _putchar('0');
        _putchar('\n');
        return 0;
    }

    for (i = 1; i < argc; i++)
    {
        if (!is_digit_string(argv[i]))
        {
            char *error = "Error\n";
            int j = 0;
            while (error[j])
            {
                _putchar(error[j]);
                j++;
            }
            return 1;
        }

        num = 0;
        int k = 0;
        while (argv[i][k])
        {
            num = num * 10 + (argv[i][k] - '0');
            k++;
        }

        sum += num;
    }

    print_number(sum);
    _putchar('\n');

    return 0;
}
