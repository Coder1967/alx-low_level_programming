#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - Checks if it is a number
 * @c: variable that stores number
 * Return: 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
