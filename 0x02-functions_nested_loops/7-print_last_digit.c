#include "holberton.h"
/**
 * print_last_digit - prints final digit of n
 * @n: number to extract last digit from
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
