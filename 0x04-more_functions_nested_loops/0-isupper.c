#include "main.h"
#include <ctype.h>
/**
 * _supper - Function to check for uppercases
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
		
