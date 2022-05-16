#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - function to print integers
 * @separator: separates the integers
 * @n: number of integers
 * Return: nothing(void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
		unsigned int i, x;
		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
			if (separator != NULL)
			{
			if (i != (n - 1))
			{
				printf("%s", separator);
			}
			}
		}
		va_end(args);
		printf("\n");
}
