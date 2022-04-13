#include <time.h>
#include <stdlib.h>
#include "main.h"
/**
 * positive_or_negative - Entry point
 *
 * Return: Always 0(success)
 */
void positive_or_negative(int i)
{
	srand(time(0));
	

	if ( i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
	
}
