#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_most_numbers - prints out most numbers
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
			i++;
			continue;
		}
		else
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}
