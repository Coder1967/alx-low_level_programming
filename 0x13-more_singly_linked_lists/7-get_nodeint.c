#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function returns a pointer to the nth node
 * (count starts from 0)
 * @head: pointer to the first node of the list
 * @index: the position of the node to return starting from index of 0
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head != NULL)
	{
		for (i = 0; i < index; i++)
		{
			head = head->next;
		}
		if (head->next != NULL)
			return (head->next);
	}
	return (NULL);
}
