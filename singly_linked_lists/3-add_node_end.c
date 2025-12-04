#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a singly linked list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* str cannot be NULL — required by project */
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	return (new_node);
}
