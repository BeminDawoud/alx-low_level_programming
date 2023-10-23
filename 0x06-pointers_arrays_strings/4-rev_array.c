#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int c[n];
	int j = n - 1;

	for(int i = 0; i < n; i++)
	{
		c[j] = a[i];
		j--;
	}
	for(int f = 0; f < n; f++)
	{
		a[f] = c[f];
	}
}
