#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function to free allocated memory for linked list
 * @head: pointer to the first node
 * Return: nothing(void)
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
