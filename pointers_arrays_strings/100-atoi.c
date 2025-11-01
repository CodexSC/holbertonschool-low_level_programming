#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;
	int digit;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (result > 214748364 || (result == 214748364 && digit > 7))
				break;
			result = result * 10 + digit;
		}
		else if (result > 0)
			break;

		i++;
	}

	return (result * sign);
}
