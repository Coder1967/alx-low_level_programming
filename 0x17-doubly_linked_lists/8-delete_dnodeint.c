#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes node at specified index
 * @head: pointer to a pointer to the head node
 * @index: the index to delete number from(counting from 0)
 * Return: 1(on success) and -1(on failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *tmp1 = NULL;
	unsigned int size = 0, i;

	if (*head == NULL)
	{
		return (-1);
	}
	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	tmp = *head;
	if (index == 0)
	{
		tmp1 = tmp->next;
		tmp1->prev = NULL;
		free(tmp);
		*head = tmp1;
		return (1);
	}
	if (index > size - 1)
		return (-1);
	tmp = *head;

	for (i = 0; i < index - 1; i++)
	{
		tmp = tmp->next;
	}
	tmp1 = tmp->next->next;
	free(tmp->next);
	tmp->next = tmp1;
	tmp1->prev = tmp;
	return (0);
}
