#include "holberton.h"
/**
 * _pow_recursion - gets result of x to the power of y
 * @x: first number
 * @y: second nuber
 * Return: Result of x^y, or -1 if received negative number
 */
int _pow_recursion(int x, int y)
{
	if (y >= 2)
	{
		x *= _pow_recursion(x, y - 1);
	}
	else if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x);
}
