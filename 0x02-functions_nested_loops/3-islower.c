#include"holberton.h"
/**
 * _islower - check for lowercase
 * @c: Letter to check
 * Return: 1 if lower, 0 otherwise
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	return (0);
}
