#include "3-calc.h"
/**
 * main - function that performs calculation based on input
 * Return: 0 on success
 * @argc: number of arguments passed
 * @argv: array of string arguments passed
 */
int main(int argc, char **argv)
{
	int (*fpointer)(int, int);
	int a;
	int b;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* Sets numbers */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%')
			&& (a == 0 || b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	fpointer = get_op_func(argv[2]);
	if (fpointer == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = fpointer(a, b);

	printf("%d\n", result);
	return (0);
}
