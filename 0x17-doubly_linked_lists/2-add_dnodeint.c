#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - function adds a node to the beginning of a
 * doubly_linked list
 * @head: pointer to the first node
 * @n: number to be put in the new node
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
