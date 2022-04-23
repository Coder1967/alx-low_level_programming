#include <stdio.h>
/**
 * reverse_array - function to reverse array
 * @a: var1
 * @n:var2
 * Return: value
 */
void reverse_array(int *a, int n);
{
	int i;
	int arr[n];

	for (i = 0; i < n; i++)
	{
		arr[i] = a[i];
	}

	int j;
	i = 0;

	for (j = n - 1; j >= 0; j--)
	{
		a[i] = arr[j];
		i++;
	}
}

