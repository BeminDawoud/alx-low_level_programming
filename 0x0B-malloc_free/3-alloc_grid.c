#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* free_gridz - free allocated memory
* @grid: allocated memory
* @height: height
* Return: void
*/
void free_gridz(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

/**
*alloc_grid - create array
* @width: width
* @height: height
* Return: pointer or NULL
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			return (NULL);
	}
	/*free_gridz(array, height);*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
