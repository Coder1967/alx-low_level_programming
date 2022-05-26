#include "lists.h"
/**
 * sum_listint - function to sum up a linked list
 * @head: pointer to the first node of the list
 * Return: sun of the numbers in the list(on success)
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int total = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		total += tmp->n;
		tmp = tmp->next;
	}
	return (total);
}
