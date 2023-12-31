#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - free memory.
 * @grid: aloocated array
 * @height: hieght.
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
