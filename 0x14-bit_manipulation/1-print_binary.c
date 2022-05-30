#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_binary - function to print binary number
 * @n: number to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1) 
		print_binary(n >> 1); 
	_putchar((n & 1) + '0'); 
}
