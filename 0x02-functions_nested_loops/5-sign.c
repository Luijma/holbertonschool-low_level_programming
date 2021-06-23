#include "holberton.h"
/*
 * print_sign - checks if n is + or -
 * @n: number to identify
 * Return: 1 if positive.
 * Returns 0 if 0, -1 if negative
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
	return (0);
}
