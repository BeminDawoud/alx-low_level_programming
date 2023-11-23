#include "main.h"
/**
 * set_bit - function to print binary representation.
 * @n: number in decimal.
 * @index: the index.
 * Return: the bit.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int index_max = sizeof(unsigned long int) * 8;
	unsigned long int temp;

	if (index > index_max)
		return (-1);
	temp = (1 << index);
	*n = *n | temp;
	return (1);
}
