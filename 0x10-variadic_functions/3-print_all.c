#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
void print_all(const char * const format, ...)
{
	int i = 0, s = strlen(format), x;
	va_list args;
	double d;
	char *str;

	va_start(args, format);
	while (i < s - 1)
	{
		switch (format[i])
		{
			case 'i':
				x = va_arg(args, int);
				printf("%d, ", x);
				break;
			case 'c':
				x = va_arg(args, int);
				printf("%c, ", x);
				break;
			case 'f':
				d = va_arg(args, double);
				printf("%f, ", d);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str != NULL)
				{
					printf("%s, ", str);
					break;
				}
				printf("(nil), ");
				break;
		}
		i++;
	}
	switch (format[s - 1])
	{
		case 'i':
			x = va_arg(args, int);
			printf("%i", x);
			break;
		case 'c':
			x = va_arg(args, int);
			printf("%c", x);
			break;
		case 'f':
			d = va_arg(args, double);
			printf("%f", d);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str != NULL)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
	}
	printf("\n");
}
