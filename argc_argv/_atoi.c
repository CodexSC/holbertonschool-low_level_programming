/**
 * _atoi - converts a string to an integer
 * @s: input string
 * Return: integer value
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, res = 0;

    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }

    for (; s[i]; i++)
        res = res * 10 + (s[i] - '0');

    return res * sign;
}
