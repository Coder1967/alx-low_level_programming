#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * print_dlistint - function to print contents of a list
 * @h: pointer to the head node
 * Return: number of nodes present in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp = head;
	size_t size = 0;

	while (tmp != NULL)
	{
		printf("%d", tmp->n);
		tmp = tmp->next;
		size += 1;
	}
	return (size);
}
