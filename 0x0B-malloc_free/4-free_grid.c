#include <stdlib.h>
/**
 * free_grid - function
 * @grid: var1
 * @height: var2
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free (grid[i]);
	}
	free (grid);
}
