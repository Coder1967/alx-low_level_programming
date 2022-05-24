#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function to count number of nodes in a linked list
 * @h: pointer to the first node of the list
 * Return: number of nodes present in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	int count = 0;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
