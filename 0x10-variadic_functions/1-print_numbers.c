#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		int i, x;
		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
		va_end(args);
		printf("\n");
	}
}
