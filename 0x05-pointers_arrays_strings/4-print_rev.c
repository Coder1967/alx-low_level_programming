#include "main.h"
/**
 * print_rev - function to print reverse string
 * @s: string to be reversed
 * Return: 0;
 */

void print_rev(char *s)
{
	int a = 0;

	while(str[a] != '\0')
	{
		a++;
	}

	int i = a - 1;

	while(i >= 0)
	{
		printf("%c", str[i]);
		i--;
	}
}

