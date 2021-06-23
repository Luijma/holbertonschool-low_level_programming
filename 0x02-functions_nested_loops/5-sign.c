#include "holberton.h"
/**
 * print_sign - prints if n is + or -
 * @n: number to identify
 * Return: 1 if positive. 0 if 0, -1 if neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
