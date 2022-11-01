#include <stdio.h>
#include "search_algos.h"
/**
 *  binary_search - searches for a value using binary search
 *  @array: sorted array to be searched
 *  @size: size of the array
 *  @value: value to be searched for
 *  Return: index of value on success and -1
 *  on failure
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (recurse_binary(array, 0, size - 1, value));
}
/**
 * recurse_binary - recursively carries out binary search
 * @left: start index of the array
 * @right: end index of array
 * @array: sorted array to be searched
 * @value: value to be searched for
 * Return: index of value on success and -1
 * if value is absent
 */
int recurse_binary(int *array, size_t left, size_t right, int value)
{
	int mid;
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
	if (right >= left)
	{
		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] > value)
		{
			return (recurse_binary(array, left, mid - 1, value));
		}
		return (recurse_binary(array, mid + 1, right, value));
	}
	return (-1);
}
