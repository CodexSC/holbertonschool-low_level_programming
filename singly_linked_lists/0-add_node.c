#include "lists.h"
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node = malloc(sizeof(list_t));

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

    new_node->next = *head;
    *head = new_node;

    return new_node;
}
