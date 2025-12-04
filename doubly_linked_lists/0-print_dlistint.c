#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all elements of a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 *
 * Description: Prints each node's integer value on a separate line.
 * If the list is empty, returns 0 without printing anything.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	/* Traverse the entire doubly linked list */
	while (h != NULL)
	{
		/* Print the integer value of the current node */
		printf("%d\n", h->n);

		/* Increment node counter */
		count++;

		/* Move to the next node */
		h = h->next;
	}

	/* Return the total number of nodes */
	return (count);
}
