#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_binary - function to print binary number
 * @n: number to be converted to binary
 * Return: void
 */
int divide(int num1, int num2);
int modulus(int num1, int num2);
void print_binary(unsigned long int n)
{
	char s[24];
	int len = 0;
	int tmp = 0, i = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (n != 0)
		{
			tmp = modulus(n, 2);
			tmp += '0';
			s[i] = tmp;
			n = divide(n, 2);
			i++;
		}
		s[i] = '\0';
		len = strlen(s);
		for (i = len - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}
}
/**
 * modulus - function to return renmainder from a division
 * @num1: number to be divided
 * @num2: divisor
 * Return (remainder)
 */
	int modulus(int num1, int num2)
	{
		while (num1 >= num2)
		{
			num1 -= num2;
		}
		return (num1);
	}
/**
 * divide - function to divide 2 numbers
 * @num1: number to be divided
 * @num2: divisor
 * Return: result of division
 */
	int divide(int num1, int num2)
	{
		int tmp = 1;
		int quotient = 0;

		while (num2 <= num1)
		{
			num2 <<= 1;
			tmp <<= 1;
		}
		while (tmp > 1)
		{
			num2 >>= 1;
			tmp >>= 1;
			if (num1 >= num2)
			{
				num1 -= num2;
				quotient += tmp;
			}
		}
		return (quotient);
	}
