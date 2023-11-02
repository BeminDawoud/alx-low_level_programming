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
	int i, *ptr, num;

	if (min > max)
		return (NULL);
	num = (max - min + 1);
	ptr = malloc(sizeof(int) * num);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < num; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);

}
