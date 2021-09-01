#include "main.h"
/**
 * print_diagonal - prints a diagonal line of \
 * @n - number of \ to print
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar(' ');
	}
	_putchar('\n');
}
