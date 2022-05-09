#include <stdio.h>
#include "main.h"

int *array_range(int min, int max)
{
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = (int *) malloc((max - min) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
