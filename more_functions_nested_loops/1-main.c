#include "main.h"
#include <stdio.h>
/**
* _isdigit - checks if a character is a digit.
* @c: The character to be checked.
*
* Return: 1 if c is a digit (0 through 9), 0 otherwise.
*
* Description: This function determines if the input character
* is a numeric digit by checking its ASCII value. 
* The standard library function isdigit could also be used for
* similar functionality. Run "man isdigit" for more information.
*/

int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));

    return (0);
}