#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to duplicate into the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	/* compute length manually */
	for (i = 0; str[i]; i++)
		;

	/* allocate memory for string */
	new_node->str = malloc(i + 1);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	/* copy string manually */
	for (i = 0; str[i]; i++)
		new_node->str[i] = str[i];
	new_node->str[i] = '\0';

	new_node->len = i;
	new_node->next = NULL;

	/* if list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* walk to last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	return (new_node);
}
