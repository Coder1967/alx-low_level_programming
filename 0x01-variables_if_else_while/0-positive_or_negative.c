#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0(success)
 */
int main(void)
{
	double n;

	srand(time(0));
	n=rand()-RAND_MAX/2;
	if (n > 0)
	{
		printf ("%.1f is positive\n",n);
	}
	else if (n == 0)
	{
		printf ("%.1f is zero\n",n);
	}
	else if (n < 0)
	{
		printf ("%.1f is negative\n",n);
	}
	return (0);
}
