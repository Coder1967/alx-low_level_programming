#include <stdio.h>
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
	char *s1 = memset(s,b,n);

	return (s1);
}

