#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
int _islower(int c)
{
	int num;
	(c >= 'a' && c <= 'z') ?  num = 1 : num = 0;
	return num;
}
