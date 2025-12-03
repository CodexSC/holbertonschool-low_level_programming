#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to be duplicated in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	/* calculate string length */
	for (i = 0; str[i]; i++)
		;

	/* allocate memory for string */
	new_node->str = malloc(i + 1);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	/* copy string and set length */
	for (i = 0; str[i]; i++)
		new_node->str[i] = str[i];
	new_node->str[i] = '\0';
	new_node->len = i;

	/* insert at beginning */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
