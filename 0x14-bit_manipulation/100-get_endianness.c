#include "main.h"
/**
 * get_endianness - function to get the endianess of a computer
 * Return: 1 if small endian and 0 otherwise
 */
int get_endianness(void)
{
	unsigned int n = 1;

	if (*(char *) &n == 1)
	{
		return (1);
	}
	return (0);
}
