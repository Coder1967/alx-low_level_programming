#include <stdio.h>
#include "main.h"
/**
 * print_array - function to print array
 * @a: variable
 * @n: number storing variable
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
		printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
