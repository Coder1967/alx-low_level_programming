#include "main.h"
/**
 * get_bit - function to get bit at an index
 * @n: number bit is gotten from
 * @index: position to be gotten from
 * Return: indexed bit(on success)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 7)
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
