#include "holberton.h"
/**
 * _strlen - function that calculates length of a string
 * @s: string to get length of
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
