#include "holberton.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number to check, if < 0, return -1 for error
 * Return: returns factorial of n, -1 if < 0
 */
int factorial(int n)
{
	if (n > 1)
		return (n = n * factorial(n - 1));
	else if(n < 0)
		return (-1);
	return 1;
}
