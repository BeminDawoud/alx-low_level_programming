#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description:
 *
 * Return: 0 on success
 */
int main()
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	return;
}
