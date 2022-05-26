#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - function to add a new node to the 
 * front of the list
 * @head: pointer pointing to the pointer which contains
 * the address of the first node of the list
 * @n: number to be put in the new node
 * Return: a pointer to the new node(if successful)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
