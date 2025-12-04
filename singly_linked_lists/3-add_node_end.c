#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a singly linked list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 *
 * Return: The address of the new node, or NULL if it failed
 *
 * Description: Creates a new node with a duplicated string,
 * calculates its length, and adds it to the end of the list.
 * If the list is empty, the new node becomes the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	/* Check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Create the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Set up the new node */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* Case 1: Empty list - new node becomes head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Case 2: Non-empty list - find last node and add */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;

	return (new_node);
}
