#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _islower - entry point
 *  
 * @c: contains values to be compared
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
