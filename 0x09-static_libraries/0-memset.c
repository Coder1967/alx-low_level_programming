#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
	char *set;
	set = memset(s, b, n);
	return set;
}
