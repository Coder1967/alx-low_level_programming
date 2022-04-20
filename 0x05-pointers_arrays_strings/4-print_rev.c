#include "main.h"
#include <stdio.h>
/**
 * print_rev - function to print reverse string
 * @s: string to be reversed
 * Return: 0;
 */

void print_rev(char *s)
{
	int a = 0;

	while(s[a] != '\0')
	{
		a++;
	}

	int i = a - 1;

	while(i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}
}

