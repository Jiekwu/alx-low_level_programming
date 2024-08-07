#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in a linked list
 * @head: A pointer to the head of the list
 * Return: If there is no loop - NULL
 * Otherwise- the adress of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
        listint_t *tortoise, *hare;

        if (head == NULL || head->next == NULL)
                return (NULL);

        tortoise = tortoise->next;
        hare = (hare->next)->next;

        while (hare)
        {
                if (tortoise == hare)
                {
                        tortoise = hare;

                        while (tortoise != hare)
                        {
                                tortoise = tortoise->next;
                                hare = hare->next;
                        }
                        return (tortoise);
                }

                tortoise = tortoise->next;
                hare = (hare->next)->next;
        }

        return (NULL);  
