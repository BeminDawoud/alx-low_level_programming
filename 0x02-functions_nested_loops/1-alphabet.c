#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description:
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
