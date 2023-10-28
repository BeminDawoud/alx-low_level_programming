#include "main.h"
#include <stdlib.h>
/**
* main - adding numbers
* @argc: count of args
* @argv: array of strings
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int i;
	long sum = 0;
	char *error;
	long num;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &error, 10);
		if (*error != '\0')
		{
			printf("Error\n");
			return (1);
		}
		else
			sum = sum + num;
	}
	printf("%ld\n", sum);
	return (0);
}
