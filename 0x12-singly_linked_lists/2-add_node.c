#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function to add a new node to the
 * beginning of the list
 * head - pointer containg the address of the pointer that points to the first node
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *n = (list_t *) malloc(sizeof(list_t));

	if (n != NULL)
	{
		n->str = strdup(str);
		*head = n;
		n = tmp;
		return (n);
	}
	else
	{
		return (NULL);
	}
}
