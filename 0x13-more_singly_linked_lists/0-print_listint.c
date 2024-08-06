#include "list.h"

/**
 * print_listint - Prints all the elements of a listin_t list
 * @h: A pointer to the head of the list
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		nodes++;
		print("%d\n", h->n);
		h = h->next
	}

	return (nodes);
}
