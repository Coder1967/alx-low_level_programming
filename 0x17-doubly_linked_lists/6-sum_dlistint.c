#include "lists.h"
/**
 * sum_dlistint - function sums values of a list
 * @head: pointer to th first node of a linked list
 * Return: sum of the values of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
