#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts binary to decimal
 * @b: base 2 to be converted supplied as a string
 * Return: decimal conversion(on success);
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = atoi(b), j;
	unsigned int tmp = 0, total = 0, count = 0;
	unsigned int i = 0, len = strlen(b);

	for (j = 0; j < len; j++)
	{
		if (b[j] == '0' || b[j] == '1')
			count++;
	}
	if (b != NULL)
	{
	while (n != 0)
	{
		tmp = n % 10;
		tmp <<= i;
		total += tmp;
		n = n / 10;
		i++;
	}
	if (count == len)
	{
		return (total);
	}
	}
	return (0);
}
