#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: The pointer to the adress
 * @n: The integer for the new node
 * Return: If the function fails- NULL
 * Otherwise- the adress of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
