#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - multiply two numbers.
 * @argc: count of args
 * @argv: array of arguements.
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	unsigned long int num1, num2, mul;
	char *endptr1, *endptr2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = strtoull(argv[1], &endptr1, 10);
	num2 = strtoull(argv[2], &endptr2, 10);

	if (*endptr1 != '\0' || *endptr2 != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	mul = num1 * num2;
	printf("%ld\n", mul);
	return (0);
}
