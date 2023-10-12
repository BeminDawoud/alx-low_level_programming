#include "main.h"
/**
 * more_numbers - check Description
 *
 * Description:
 *
 * Return: 0 on success
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
		_putchar(j);
		}
		for (j = '0'; j <= '4'; j++)
		{
		_putchar('0' + j);
		}
	}
	_putchar('\n');
}
