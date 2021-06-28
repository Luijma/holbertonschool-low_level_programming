#include "holberton.h"
/**
 * _strlen - function that calculates length of a string
 * @s: string to get length of
 * Return: length of s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s[length] != '\0')
	{
		length++;
	}
	return (length);
}
