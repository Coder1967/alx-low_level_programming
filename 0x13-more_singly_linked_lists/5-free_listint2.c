#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function to free the
 * head pointer to the list
 * @head: pointer pointing to a pointer which
 * points to the address of the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	*head = NULL;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
}
