#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_numbers - prints out some digits
 * Return : Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
