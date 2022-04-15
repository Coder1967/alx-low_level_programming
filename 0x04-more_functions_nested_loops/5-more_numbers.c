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
	int firstnum;
	int second num;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				secondnum = j;
			}
			else
			{
				firstnum = j/10;
				secondnum = result % 10;
				_putchar(firstnum + '0');
			}
			_putchar(secondnum + '0');
		
		}
		j = 0;
		_putchar('\n');
	}
}
