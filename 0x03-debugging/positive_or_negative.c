#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - Entry point
 *
 * Return: Always 0(success)
 */
void positive_or_negative(int i)
{
	if ( i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
