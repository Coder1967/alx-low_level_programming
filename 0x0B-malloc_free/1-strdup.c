#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
	char *ptr; int i, n;
	if (str = NULL)
	{
		return NULL;
	}

	while (str[i] != '\0')
	{
		str[i];
		i++;
	}
	ptr = (char *) malloc(sizeof(char) * i);

	for (n = 0; n < i; n++)
	{
		ptr[n] = str[n];
	}
	return ptr;
}


