#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           containing a duplicate of the string given as a parameter
 * @str: String to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
 */

char *_strdup(char *str)
{
unsigned int len;
unsigned i;
char *dup;

if(str == NULL)
return (NULL);

len = 0;
while(str[len] != '\0')
len ++;

dup = (char *)malloc(sizeof(char) * (len +1));

if(dup == NULL)
return (NULL);

i = 0;
while (i<= len)
{
dup[i] = str[i];
i++;
}

return (dup);
}
