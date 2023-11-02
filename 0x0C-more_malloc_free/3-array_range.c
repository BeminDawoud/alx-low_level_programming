#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - concat a string.
 * @min: minimum range.
 * @max: maximum range.
 * Return: pointer or NULL.
 */
int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);

}
