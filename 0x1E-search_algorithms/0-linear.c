#include "search_algos.h"

/**
 * linear_search - Function to search a value in an array of integers.
 * @array: pointer to the first element of array.
 * @size: number of elements.
 * @value: value to be searched.
 *
 * Return: index of value found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || !value)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
