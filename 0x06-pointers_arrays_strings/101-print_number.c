#include "main.h"

/**
 * rot13 - the function prints a number.
 * @n: number to print.
 * Return: Nothing.
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		putchar('-');
	}
	if (n / 10 != 0)
		print_number(n / 10);
	putchar(n % 10 + '0');
}
