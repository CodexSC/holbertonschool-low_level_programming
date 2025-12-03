#include "lists.h"
#include <string.h>

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node = malloc(sizeof(list_t));
    list_t *temp;

    if (new_node == NULL)
        return NULL;

    if (str == NULL)
    {
        new_node->str = NULL;
        new_node->len = 0;
    }
    else
    {
        new_node->str = strdup(str);
        new_node->len = strlen(str);
    }

    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return new_node;
    }

    temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;

    return new_node;
}
