#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * more_numbers - function that prints out numbers
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for(j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
