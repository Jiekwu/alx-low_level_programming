#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: Pointer to the adress
 * Description: Sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
