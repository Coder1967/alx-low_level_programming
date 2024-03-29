#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - function deallocates memory of a list
 * @head: pointer to the first node
 * Return: Void(nothing)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		head = tmp;
		tmp = head->next;
		free(head);
	}
}
