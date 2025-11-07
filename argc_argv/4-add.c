#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
 * is_valid_number - checks if string contains only digits
 * @str: string to check
 *
 * Return: 1 if valid, 0 otherwise
 */
int is_valid_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int sum;
	int i;
	int num;

	sum = 0;
	i = 1;

	while (i < argc)
	{
		if (!is_valid_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		sum += num;
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
