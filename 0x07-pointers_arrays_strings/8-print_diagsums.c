#include "main.h"
/**
 * print_diagsums - a function that prints sum of the two diagonals.
 * @a: a pointer
 * @size: size of array
 * Return: null
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum1 = 0;
	long int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * (size + 1)];
		sum2 = sum2 + a[(i + 1) * (size - 1)];
	}
	printf("%li, %li\n", sum1, sum2);
}
