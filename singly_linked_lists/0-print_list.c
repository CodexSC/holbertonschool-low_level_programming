#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a singly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 *
 * Description: Prints each node in format [length] string
 * If str is NULL, prints [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* Traverse the entire linked list */
	while (h != NULL)
	{
		/* Check if str pointer is NULL */
		if (h->str == NULL)
		{
			/* Print [0] (nil) for NULL strings */
			printf("[0] (nil)\n");
		}
		else
		{
			/* Print [length] string for valid strings */
			printf("[%u] %s\n", h->len, h->str);
		}

		/* Increment node counter */
		count++;

		/* Move to the next node */
		h = h->next;
	}

	/* Return the total number of nodes */
	return (count);
}
