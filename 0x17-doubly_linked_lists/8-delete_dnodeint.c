#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a list
 * @head: A pointer to the head of the list
 * @index: The index of the node to delete
 * Return: -1 or 1
 *
 * Code by 0xOneBeing
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	temp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(tmp);
	return (1);
}
