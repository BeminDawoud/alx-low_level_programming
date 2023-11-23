#include "main.h"
/**
 * print_binary - function to print binary representation.
 * @n: number in decimal.
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp = n, i = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (temp > 0)
	{
		i++;
		temp = temp >> 1;
	}
	while (i > 0)
	{
		i--;
		if ((n >> i) & 1 == 1)
			putchar('1');
		else
			putchar('0');
	}
}
