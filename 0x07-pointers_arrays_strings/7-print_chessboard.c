#include "main.h"
/**
 * print_chessboard - a function that prints a chessboard.
 * @a: a pointer to an array
 *
 * Return: returns pointer
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
