#include "holberton.h"
/**
 *free_grid - frees  2 dimensional grid
 *@grid:  grid  free
 *@height:  number row
 */

void free_grid(int **grid, int height)
{
	int ct = 0;

	if (grid != NULL || height < 1)
	{
		while (ct < height)
		{
			free(grid[ct]);
			ct++;
		}
		free(grid);
	}
}
