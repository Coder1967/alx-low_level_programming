#include "main.h"
/**
 * clear_bit - function to change a bit at a given index to 0
 * @n: number whose bit is to be changed at an index
 * @index: at what point the bit is to be changed
 * Return: 1(on success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 7))
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
