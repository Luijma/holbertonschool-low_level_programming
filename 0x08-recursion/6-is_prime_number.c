#include "holberton.h"
/**
 * primecheck - checks if number is prime)
 * @n: number to check
 * @i: divisor
 * Return: 1 if prime, 0 if composite
 */
int prime_check(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return prime_check(n, i - 1);
}

/**
 * is_prime_number - determines if n is prime number
 * @n: number to be checked
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return prime_check(n, n - 1);
}
