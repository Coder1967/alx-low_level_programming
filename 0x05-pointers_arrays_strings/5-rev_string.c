#include "main.h"                                                                                                                                      
#include <stdio.h>
#include <string.h>

void rev_string(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		printf("%d", s[i]);
	}
}
