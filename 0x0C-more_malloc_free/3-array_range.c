#include <stdlib.h>
#include "main.h"
/**
 * array_range - function
 * @min: var1
 * @max:var2
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *p, i = 0;

	if (min > max)
	{
		return (NULL);
	}
	p = (int *) malloc(((max - min) * sizeof(int)) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		p[i] = min;
		i++;
		min ++;
	}
	return (p);
}
