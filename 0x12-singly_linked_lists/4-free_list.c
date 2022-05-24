#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function to free allocated memory for linked list
 * @head: pointer to the first node
 * Return: nothing(void)
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *tmp = head->next;
		free(head);
		free(head->str);
		head = tmp;
	}
}
