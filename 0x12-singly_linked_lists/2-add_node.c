#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - Adds node at the beginning
 * @head: head of node
 * @str: string to store
 * Return: Adress of new element or NULL
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
