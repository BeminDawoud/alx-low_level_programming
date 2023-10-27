#include "main.h"
#include <stdlib.h>
/**
* main - Multiplying two numbers
* @argc: count of args
* @argv: array of strings
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			sum = sum * atoi(argv[i]);
		printf("%d\n", sum);
		return (0);
	}
}
