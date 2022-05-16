#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function to sum up numbers
 * @n: number to determine the number of arguments
 * Return: sum of numbers(on success)
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, x, sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < (int)n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	return (sum);
}
