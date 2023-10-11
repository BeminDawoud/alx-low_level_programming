#include "main.h"
/**
 * main - Entry point of the program
 *
 * print_alphabet prints the alphabet in lowercase fallowed by a new line
 *
 * Return: 0 on success
 */

void print_alphabet(void) /* it prints lowercase alphabet*/
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
