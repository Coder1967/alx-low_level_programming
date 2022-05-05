#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *ptr; int i, n;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = (char *) calloc(i, sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (n = 0; n <= i; n++)
	{
		ptr[n] = str[n];
	}
	return (ptr);
}
