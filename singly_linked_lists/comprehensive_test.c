#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void print_all(list_t *h)
{
printf("\n=== List Contents ===\n");
print_list(h);
printf("=== End of List ===\n\n");
}

int main(void)
{
list_t *head;

/* Test 1: Basic operation */
printf("Test 1: Basic operation\n");
head = NULL;
add_node(&head, "Hello");
add_node(&head, "World");
print_all(head);

/* Test 2: Empty string */
printf("Test 2: Empty string\n");
head = NULL;
add_node(&head, "");
add_node(&head, "test");
print_all(head);

/* Test 3: Very long string */
printf("Test 3: Very long string\n");
head = NULL;
add_node(&head, "This is a very long string to test the memory allocation and string duplication");
print_all(head);

/* Test 4: Special characters */
printf("Test 4: Special characters\n");
head = NULL;
add_node(&head, "!@#$%%^^&&**()");
add_node(&head, "\n\t\r");
print_all(head);

return (0);
}
