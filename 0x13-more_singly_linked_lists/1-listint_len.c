#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function to count the number
 * of nodes present in the linked list
 * @h: pointer containing the address of the
 * first node of the list
 * Return: number of nodes present in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
