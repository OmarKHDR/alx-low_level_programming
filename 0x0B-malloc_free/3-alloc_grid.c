#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a grid of integers
 * Description: arr
 * @width: width of the grid
 * @height: height of the grid
 * Return: arr 2d.
 */

int **alloc_grid(int width, int height)
{
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	int **arrptr = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		arrptr[i] = (int *)calloc(width, sizeof(int));
	}

	return (arrptr);
}
