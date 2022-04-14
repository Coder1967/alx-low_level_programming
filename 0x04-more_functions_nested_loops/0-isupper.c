#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - Function to check for uppercases
 * @c: variable to store value
 * Return: 0
 */
int _isupper(int c)
{
	int letter;

	if (isupper(c))
	{
		letter = 1;
	}
	else
	{
		letter = 0;
	}

	return (letter);
}
		
