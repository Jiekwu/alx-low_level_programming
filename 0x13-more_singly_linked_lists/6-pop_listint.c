#include "lists.h"

/**
 * pop_listint - Deletes the first node of a list and return its data
 * @head: The pointer ti the list
 * Return: Int
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
