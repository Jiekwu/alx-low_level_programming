#include "lists.h"

/**
 * get_nodeint_at_index - Reetrieves a node
 * @head: Pointer to the first element
 * @index: The node desired position
 * Return: Pointer to the retrieved node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
