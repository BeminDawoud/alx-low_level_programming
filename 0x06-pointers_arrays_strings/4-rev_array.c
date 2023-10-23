#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;
	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
	}
}
