#include "holberton.h"
/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: values passed
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int i;
	int letter;

	for (i = 0; i < argc; i++)
	{
		for (letter = 0; (*argv)[letter]; letter++)
		{
			_putchar((*argv)[letter]);
		}
		_putchar('\n');
		argv++;
	}
	return (0);
}
