#include "main.h"
#include <ctype.h>
/**
 * _isupper - Function to check for uppercases
 * @c: int to store character
 * Return: 0
 */
int _isupper(int c)
{
	int letter;

	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
