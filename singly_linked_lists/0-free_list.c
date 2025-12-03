#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list of list_t nodes
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        temp = head->next;

        /* free string only if it exists */
        if (head->str != NULL)
            free(head->str);

        free(head);
        head = temp;
    }
}
