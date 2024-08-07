#include "lists.h"

/**
 * sum_listint- Sums up all the data
 * @head: pointer to the list
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
