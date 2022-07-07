#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * insert_dnodeint_at_index - inserts node at index on a list
 * @h: address of pointer to the head node of the list
 * @idx: index where node is to be placed
 * @n: number to be contained in node
 * Return: address of new node on success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	unsigned int size = 0, i;
	dlistint_t *tmp = *h;

	if (*h == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}
	if (idx > size - 1)
		return (NULL);
	tmp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
	}
	new->prev = tmp;
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
