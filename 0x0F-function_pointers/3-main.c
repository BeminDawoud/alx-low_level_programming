#include "3-calc.h"
/**
 * main - the main function to run the operation
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: result or 100 or 99 or 98
 */
int main(int argc, char **argv)
{
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(get_op_func(argv[2])))
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}
