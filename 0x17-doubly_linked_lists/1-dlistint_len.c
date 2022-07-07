#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - function to count number of nodes in list
 * @h: pointer to first node of the list
 * Return: number of nodes present
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t len = 0;

	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
