#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that returns address
 * @b: variable
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
