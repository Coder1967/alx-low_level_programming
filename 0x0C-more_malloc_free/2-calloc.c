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

	if (nmemb == NULL)
	{
		return (NULL);
	}
	if (size == NULL)
	{
		return (NULL);
	}
	p = (int *) malloc(size, nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
       return (p);
}
