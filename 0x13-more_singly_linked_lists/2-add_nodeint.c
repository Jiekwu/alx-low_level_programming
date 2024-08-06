#include "list.h"

/**
 * add_nodeint - Adds a new node to the beginning
 * @head: A pointer
 * @n: The integer to be added
 * Return: if function fails - NULL;
 * 	otherwise - pointer to the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	head = new;

	return (new);
}
