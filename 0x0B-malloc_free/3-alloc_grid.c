#include "holberton.h"
/**
***alloc_grid -return the  pointer 2 dimensional array of integers
*@width: size colum
*@height: size row
*
*Return: NULL if failure or width or height is 0 or negative, else a pointer
*/

int **alloc_grid(int width, int height)
{
	int j1;
	int j2;
	int **e;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	e = malloc(height * sizeof(int *));
	if (e == NULL)
	{
		free(e);
		return (NULL);
	}
	for (j1 = 0; j1 < height; j1++)
	{
		e[j1] = malloc(sizeof(int) * width);
		if (e[j1] == NULL)
		{
			for (; j1 >= 0; j1--)
			{
				free(e[j1]);
			}
			free(e);
			return (NULL);
		}
	}
	for (j1 = 0; j1 < height; j1++)
	{
		for (j2 = 0; j2 < width; j2++)
		{
			e[j1][j2] = 0;
		}
	}
	return (e);
}

