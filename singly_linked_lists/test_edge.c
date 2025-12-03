#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *head;

    head = NULL;
    
    /* Test 1: Add normal node */
    printf("Test 1: Normal node\n");
    add_node(&head, "Hello");
    printf("Node added, len should be 5: %u\n", head->len);
    
    /* Test 2: Add empty string */
    printf("\nTest 2: Empty string\n");
    add_node(&head, "");
    printf("Empty string len should be 0: %u\n", head->len);
    
    /* Test 3: Add another node */
    printf("\nTest 3: Another node\n");
    add_node(&head, "World");
    printf("World len should be 5: %u\n", head->len);
    
    printf("\nFull list:\n");
    print_list(head);
    
    return (0);
}
