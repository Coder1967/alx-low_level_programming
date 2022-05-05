#include <stdlib.h>
#include "main.h"
/**
 * create_array - function
 * @size: variable number 1
 * @c: variable number 2
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	if (size > 0)
	{
	ptr = (char *) malloc (size * sizeof(char));
	for (i = 0; i < (int)size; i++)
	{
		*(ptr + i) = c;

	}
	}
	else if (size == 0)
	{
		return NULL;
	}
	if (ptr == NULL)
	{
		return NULL;
	}
	free(ptr);
	return ptr;
}
