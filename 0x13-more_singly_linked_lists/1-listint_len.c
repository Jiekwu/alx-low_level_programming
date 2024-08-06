#include "list.h"

/**
 * listint_len - Number of elements
 * @h: A pointer 
 * Return: The number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
