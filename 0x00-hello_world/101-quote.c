#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints a message to the standard error.
 *
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

