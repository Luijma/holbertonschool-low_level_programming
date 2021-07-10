#include "holberton.h"
/**
 * main - prints result of multiplication
 * @argc: number of arguments
 * @argv: values passed
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int result;
	int a;
	int b;

	if (argc != 3)
	{
		printf("ERROR\n");
	} else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	return (0);
}
