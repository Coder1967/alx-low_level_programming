#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_line - prints line
 * @n: holds the line length
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if ( n <= 0)
		{
			('\n');
			break;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
