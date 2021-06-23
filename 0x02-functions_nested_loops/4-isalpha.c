#include "holberton.h"
/**
 * _isalpha - checks for alphabetical char
 * @c: char to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	} else if (c < 123 && c > 97)
	{
		return (1);
	}
	return (0);
}
