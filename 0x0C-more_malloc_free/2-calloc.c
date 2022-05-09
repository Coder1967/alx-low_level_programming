#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function
 * @nmemb: number of lements
 * @size: size in bytes
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	p = (int *) calloc(nmemb, size);
	if (p == NULL)
	{
		return (NULL);
	}
       return (p);
}
