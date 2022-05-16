#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints out string
 * @separator: separates the strings from each other
 * @n :number of arguments
 * Return: nothing(void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		int i;
		char *x;
		va_list args;

		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, char *);
			if (x == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", x);
			}
			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
		va_end(args);
		printf("\n");
	}
}
