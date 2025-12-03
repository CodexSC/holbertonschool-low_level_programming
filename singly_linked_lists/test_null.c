#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *head;

    head = NULL;
    
    /* Test: Add NULL string - this might crash! */
    printf("Test: NULL string\n");
    list_t *result = add_node(&head, NULL);
    if (result == NULL)
        printf("add_node returned NULL\n");
    else
        printf("add_node succeeded with NULL\n");
    
    return (0);
}
