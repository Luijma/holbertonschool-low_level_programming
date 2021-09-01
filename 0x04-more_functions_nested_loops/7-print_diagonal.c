#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: number of \ to print
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = i; j < i; j++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
