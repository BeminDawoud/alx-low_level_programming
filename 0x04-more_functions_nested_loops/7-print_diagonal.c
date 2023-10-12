#include "main.h"
/**
 * print_diagonal - check Description
 * @n: parameter
 * Description:
 *
 * Return: 0 on success
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
