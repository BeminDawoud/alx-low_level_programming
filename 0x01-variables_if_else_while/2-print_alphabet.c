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
	char alphabet[26];
	int i;

	alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	i = 0;

	while (alphabet[i] != 0)
	{
	putchar(alphabet[i]);
	i++;
	}
	return (0);
}
