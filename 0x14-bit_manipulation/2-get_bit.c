#include "main.h"
/**
 * get_bit - function to print binary representation.
 * @n: number in decimal.
 * Return: the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (((n >> index) & 1) == 1)
		return (1);
	else
		return (0);
}
