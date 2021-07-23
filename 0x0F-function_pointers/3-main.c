#include "3-calc.h"
/**
 * main - function that performs calculation based on input
 * Return: 0 on success
 * argc - number of arguments passed
 * argv - array of string arguments passed
 */
int main (int argc, int *argv[])
{
	int *(operation)(int, int);
	char *operator;
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

	/* Sets Operator */
	*operator = argv[2];

	if ((*operator == "/" || *operator == "%")
			&& (a == 0 || b == 0))
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(operator);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	result = operation(a, b);

	printf("%d", result);
	return (0);
}
