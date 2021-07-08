#include "holberton.h"
/**
 * _strlen_recursion - function that prints length of string
 * @s: string to search length of
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if(*s)
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	return 0;
}
