#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function to delete the head node
 * in a linked list
 * @head: pointer to a pointer variable containing
 * the address of the first node
 * Return: the data of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n = 0;

	if (*head != NULL)
	{
		n = tmp->n;
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	return (n);
}
