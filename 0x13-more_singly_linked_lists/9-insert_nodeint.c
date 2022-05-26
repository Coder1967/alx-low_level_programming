#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function to place a
 * node at a specified position
 * @head: pointer to a pointer to the address of the first node
 * @idx: index to place list starting from 0
 * @n: number to be placed in new node
 * Return: new node(on success)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));
	unsigned int i;

	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->n = n;
	if (head != NULL)
	{
		if (idx == 0)
		{
			tmp->next = *head;
			*head = tmp;
		}
		else
		{
			for (i = 0; i < idx - 1; i++)
			{
				*head = (*head)->next;
			}
			tmp->next = (*head)->next;
			(*head)->next = tmp;
		}
		return (tmp);
	}
	return (NULL);
}
