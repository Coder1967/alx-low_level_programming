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
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
