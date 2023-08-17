#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 *
 * Code by 0xOneBeing
 */

size_t print_dlistint(const dlistint_t *h)
{

	int node_count;

	node_count = 0;

	if (h == NULL)
		return (node_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
