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
	int n;

	n = tmp->n;
	tmp = tmp->next;
	free(*head);
	*head = NULL;
	*head = tmp;
	return (n);
}
