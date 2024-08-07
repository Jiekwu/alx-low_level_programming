#include "lists.h"

/**
 * free_listp - free a linked list
 * @head: head of a list
 * Return: no return
 */

void free_listp(listint_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp)
		}
		*head = NULL;
	}
}

/** print_listint_safe - Prints a linked list
 * @head: Pointer to the list
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listint_t *hptr, *name, *new, *add;
	
	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(lisp_t));

		if (new == NULL)
			exit(98);

		new->p = (void*)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [*p] %d\n", (void *)head, head->n);
				free_listp(&htpr);
				return (nnodes);
			}
		}
		printf("[*p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_lisp(&hptr);
	return (nnodes);
}
