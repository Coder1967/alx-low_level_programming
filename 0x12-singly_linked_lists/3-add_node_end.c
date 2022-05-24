#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds node to the end
 * of the list
 * @head: pointer variable containing the address of the first
 * node of the list
 * @str: string to be duplicated
 * Return: pointer to the new string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *tmp;

	n = (list_t *) malloc(sizeof(list_t));
	if (n == NULL)
	{
		free(n);
		return (NULL);
	}
	n->str = strdup(str);
	n->len = strlen(str);
	n->next = NULL;
	if (*head == NULL)
		*head = n;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = n;
	}
	return (n);
}
