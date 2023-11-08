#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes of main.
 * @argc: arguments count
 * @argv: array arguments
 * Return: 0 or 1 or 2
 */
int main(int argc, char **argv)
{
	int i, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < num; i++)
	{
		printf("%02x", ((unsigned char *)main)[i]);
		printf("%c", i < (num - 1) ? ' ' : '\n');
	}
	return (0);
}
