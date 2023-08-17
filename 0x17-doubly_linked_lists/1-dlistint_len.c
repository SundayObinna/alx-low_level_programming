#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 *
 * Code by 0xOneBeing
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node_count;

	node_count = 0;

	if (h == NULL)
		return (node_count);

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
