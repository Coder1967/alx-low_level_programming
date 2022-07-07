#include "lists.h"
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
	const dlistint_t *tmp = h;
	size_t size = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		size += 1;
		tmp = tmp->next;
	}
	return (size);
}
