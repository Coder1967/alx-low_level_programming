#include "main.h"
/**
 * print_sign - Entry point
 * @n: the value to be compared
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		printf("+");
	}
	else if (n == 0)
	{
		return (0);
		putchar('0');

	}
	else
	{
		return (-1);
		putchar('-');
	}
}
