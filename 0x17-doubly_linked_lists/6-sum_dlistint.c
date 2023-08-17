#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data in list
 * @head: Double pointer to the head of the list
 * Return: Sum
 *
 * Code by 0xOneBeing
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
