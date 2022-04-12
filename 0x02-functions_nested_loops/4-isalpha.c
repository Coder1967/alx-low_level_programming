#include "main.h"
/**
 * _isalpha - Entry point
 * 
 * @c: contains value to be compared
 *
 * Return: Always 0(success)
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'B' || c >= 'a' && c <= 'z' )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


