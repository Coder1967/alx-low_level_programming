#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - function to loop through numbers
 * @array: pointer to first address of the array
 * @size: number of numbers in array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(action(array[i]));
		}
	}
}
