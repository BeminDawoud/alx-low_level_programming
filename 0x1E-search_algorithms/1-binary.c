#include "search_algos.h"

/**
 * binary_search - Function to search a value in an array of integers.
 * @array: pointer to the first element of array.
 * @size: number of elements.
 * @value: value to be searched.
 *
 * Return: index of value found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m, i;

	if (!array || !value)
		return (-1);
	l = 0;
	r = size - 1;
	while (l < r)
	{
		printf("Searching in array: %d", array[l]);
		for (i = l + 1; i <= r; i++)
			printf(", %d", array[i]);
		printf("\n");
		m = (l + r) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}
