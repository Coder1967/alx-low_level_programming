#include <stdlib.h> 
#include "main.h"
/**
 * binary_to_unit - converts binary to decimal
 * @b: base 2 to be converted supplied as a string
 * Return: decimal conversion(on success);
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = atoi(b);
	unsigned int tmp = 0, total = 0;
	int i = 0;

	if (b != NULL)
	{
		if (b[i] == 48 || b[i] = 49 || b[i] = '\0')
		{
			while(n != 0)
			{
				tmp = n % 10;
				tmp <<= i;
				total += tmp;
				n = n / 10;
				i++;
			}
			return (total);
		}
	}
return (0);	
}
