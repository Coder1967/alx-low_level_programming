#include "main.h"
/**
 * set_bit - sets thje bit of the indexed number to 1
 * @n: number whose bit is to be set to 1
 * @index: the indexed bit to be set
 * Return: 1(on sucess)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 7))
		return (-1);
	*n = *n ^ (1 << index);
	return (1);
}
