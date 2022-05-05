#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int i;
	int k;
	int j = 0;
	int *ptr;

if (width == 0 || height == 0)
{
	return (NULL);
}
j = width * height;
ptr = (int *) calloc(j,sizeof(int));
return (ptr);
}

