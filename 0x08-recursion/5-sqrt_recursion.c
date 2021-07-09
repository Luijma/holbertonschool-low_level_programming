#include "holberton.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get Square Root of
 * Return: Natural square root of n, -1 if doesn't have one
 */
int _sqrt_recursion(int n)
{
	int count = 0;

	if (count)
	{
		count--;
		return n *= _sqrt_recursion(n);
	}
	return n;
}
