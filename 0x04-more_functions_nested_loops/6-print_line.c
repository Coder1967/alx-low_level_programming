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

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}
