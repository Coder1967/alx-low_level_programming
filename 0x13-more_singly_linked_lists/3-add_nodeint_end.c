#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function to add a
 * node to the end of a linked list
 * @head: a pointer pointing to a pointer which contains the
 * address of the first node of the list
 * @n: the integer to be put in the new node
 * Return: pointer to the new address(if sucessful)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *tmp1 = malloc(sizeof(listint_t));

	if (tmp1 == NULL)
	{
		free(tmp1);
		return (NULL);
	}
	tmp1->n = n;
	tmp1->next = NULL;
	if (*head == NULL)
	{
		*head = tmp1;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = tmp1;
	}
	return (tmp1);
}
