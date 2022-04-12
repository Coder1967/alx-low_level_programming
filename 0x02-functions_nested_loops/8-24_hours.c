#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 00; i <= 23; i++)
	{
		for (j = 01; j <= 59; j++)
		{
			printf("%d : %d", i, j);
		}
		putchar('\n');
	}
}
