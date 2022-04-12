#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _islower(int c) - entry point
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	
	(c >= 'a' && c <= 'z') ?  return(1) : return(0);
}
