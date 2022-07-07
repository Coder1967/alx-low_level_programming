#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - function to add node to end of
 * a doubly linked list
 * @head: pointer to the head node of list
 * @n: number to be added to list
 * Return: address to the newly created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if (*head == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}

