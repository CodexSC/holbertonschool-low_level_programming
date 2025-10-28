#include "main.h"
#include <stdio.h>

/**
 * main - tests the _isupper function with 'c'
 *
 * Return: 0
 */
int main(void)
{
    char c = 'c';

    if (_isupper(c))
        printf("%c is uppercase\n", c);
    else
        printf("%c is not uppercase\n", c);

    return 0;
}
