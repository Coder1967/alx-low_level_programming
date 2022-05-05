#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
	char *ptr; int i, n;
	if (str == NULL)
	{
		return NULL;
	}

	while (str[i] != '\0')
	{
		i++;
	}
	ptr = (char *) malloc(100 * sizeof(char));

	for (n = 0; n < i; n++)
	{
		ptr[n] = str[n];
	}
	return ptr;
}


