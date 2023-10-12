#include "main.h"
/**
 * print_line - check Description
 * @n: parameter
 * Description:
 *
 * Return: 0 on success
 */
void print_line(int n)
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
			_putchar('_');
		}
		_putchar('\n');
	}
}
