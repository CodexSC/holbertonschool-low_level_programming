int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			/* Build as negative to correctly handle -2147483648 */
			result = result * 10 - (s[i] - '0');
		}
		else if (started)
		{
			break;
		}

		i++;
	}

	if (sign > 0)
		result = -result;

	return (result);
}
