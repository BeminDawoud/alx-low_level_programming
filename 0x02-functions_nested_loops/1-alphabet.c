#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: It prints the alphabet in lowercase fallowed by a new line
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
}
