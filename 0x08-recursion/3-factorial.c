#include <stdio.h>
/**
 * factorial - function to calculate fctporial of n
 * @n: parameter to receive argument
 * Return: int
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

