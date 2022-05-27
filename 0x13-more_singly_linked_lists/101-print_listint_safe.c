#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints out a list
 * @head: pointer to the first member of list
 * Return: number of node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = head;
	size_t count = 0;

	if (head != NULL)
	{
		while (tmp != NULL)
		{
			printf("[%p] %d", tmp, tmp->n);
			tmp = tmp->next;
			count++;
		}
		return (count);
	}
	exit(98);
}
