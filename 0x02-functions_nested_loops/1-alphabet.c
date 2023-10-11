#include "main.h"
/**
 * main - Entry point of the program
 *
 * print_alphabet - description prints the alphabet in lowercase 
 *
 * Return: 0 on success
 */

void print_alphabet(void) /* print_alphabet() it prints lowercase alphabet*/
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
