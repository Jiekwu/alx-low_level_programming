#include "lists.h"

/**
 * free_list - Free list
 * @head: Head of the list
 * Return: No retur
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
