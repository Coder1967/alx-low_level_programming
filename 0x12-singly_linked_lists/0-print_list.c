#include <stdio.h>
#include <stdlib.h>
#inclue "lists.h>
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
			printf("[%lu] %s", tmp->len, tmp->str);
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
