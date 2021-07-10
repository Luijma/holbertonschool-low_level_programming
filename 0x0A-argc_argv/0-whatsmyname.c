#include "holberton.h"
/**
 * main - prints name and path of program
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; (*argv)[i]; i++)
	{
		_putchar((*argv)[i]);
	}
	_putchar('\n');
	return (0);
}
