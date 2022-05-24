#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - function to print elements of a singly linked list
 * @h: pointer to the first node of the linked list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	int count = 0;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	tmp = h;
	while (tmp != NULL)
	{
		if (tmp->str != NULL)
		{
			printf("[%u] %s", tmp->len, tmp->str);
			printf("\n");
		}
		else
		{
			printf("[0] (nil)");
			printf("\n");
		}
		tmp = tmp->next;
	}
	return (count);
}
