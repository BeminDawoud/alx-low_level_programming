#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: last digit
 *
 * Return: 0 on success
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar ('num');
		if (num != '9')
		{
			putchar (',');
			putchar (' ');
		}
	}


	putchar ('\n');

	return (0);
}
