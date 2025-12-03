#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *result;

    /* Test: NULL head pointer */
    printf("Test: NULL head pointer\n");
    result = add_node(NULL, "Hello");
    if (result == NULL)
        printf("add_node returned NULL\n");
    else
        printf("add_node succeeded\n");
    
    return (0);
}
