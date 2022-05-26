#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - function to print the data in a linked list
 * @h: pointer containing address of the first node in the list
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
