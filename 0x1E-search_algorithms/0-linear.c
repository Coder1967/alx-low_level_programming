#include <stdio.h>
/**
 * linear_search - searches an array for a specific value
 * @array: array to be searched
 * @size: size of the array
 * @value: to be searched for
 * Return: returns the index of the value on success and
 * -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
