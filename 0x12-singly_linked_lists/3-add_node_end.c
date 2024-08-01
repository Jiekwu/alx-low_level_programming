#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - Add node to the end of the string
 * @head: head
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *top;
	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	top = *head;

	if (top == NULL)
		*head = newnode;
	else
	{
		while (top->next != NULL)
			top = top->next;
		top->next = newnode;
	}
	return (*head);
}
