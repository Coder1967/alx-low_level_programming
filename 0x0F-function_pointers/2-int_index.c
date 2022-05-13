#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function to compare
 * @array: pointer to array to be compared
 * @size: number of elements in array
 * @cmp: pointer to function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp != NULL && array != NULL)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	return (-1);
}
