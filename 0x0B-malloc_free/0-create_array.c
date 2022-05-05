#include <stdlib.h>
#include "main.h"
/**
 * create_array - function
 * @size: variable number 1
 * @c: variable number 2
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) malloc (size * sizeof(char));

	ptr[0] = c;
	if (size == 0)
	{
		return NULL;
	}
	if (ptr == NULL)
	{
		return ptr;
	}
	return ptr[0];
}
	
