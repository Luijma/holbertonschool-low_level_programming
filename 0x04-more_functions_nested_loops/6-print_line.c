#include "main.h"
/**
 * print_line - prints a line of n size
 * @n: number of _ to print
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
