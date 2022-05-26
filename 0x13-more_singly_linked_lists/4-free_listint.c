#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function to free linked list
 * @head: pointer to the first node of the list
 * Return: nothing(void)
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
