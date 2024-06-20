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
	if (width <= 0 || height <= 0)
		return (NULL);

	int i;
	int **arrptr = (int **)calloc(height, sizeof(int *));

	for (i = 0; i < height; i++)
	{
		arrptr[i] = (int *)calloc(width, sizeof(int));
	}

	return (arrptr);
}
