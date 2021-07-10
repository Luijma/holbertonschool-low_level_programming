#include "holberton.h"
#include <stdio.h>
/**
 * main - prints name and path of program
 * Return: 0 on success
 * @argc: number of arguments
 * @argv: values of the arguments
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; (*argv)[i]; i++)
	{
		_putchar((*argv)[i]);
	}
	_putchar('\n');
	return (0);
}
