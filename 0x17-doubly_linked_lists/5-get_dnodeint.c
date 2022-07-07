#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function gets the address of the indexed
 * node starting count from 0
 * @head: pointer to head node
 * @index: the index of the node to be returned
 * Return: address of specified node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int size = 0, i;

	if (head == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	tmp = head;
	if (index > size - 1)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
