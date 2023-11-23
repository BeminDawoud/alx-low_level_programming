#include "main.h"
/**
 * clear_bit - function to print binary representation.
 * @n: number in decimal.
 * @index: the index.
 * Return: the bit.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int index_max = sizeof(unsigned long int) * 8;
	unsigned long int temp = 1;

	if (index > index_max)
		return (-1);
	temp = temp << index;
	temp = ~temp;
	*n = *n & temp;
	return (1);
}
