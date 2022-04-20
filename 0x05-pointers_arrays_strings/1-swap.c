#include "main.h"
/**
 * swap_int - swaps integers
 * @a: contains first integer to be swapped
 * @b: contains second int to be swapped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int save = *b;

	*b = *a;
	*a = save;
}
