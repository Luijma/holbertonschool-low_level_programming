#include "holberton.h"
/**
 * _strlen - function that calculates length of a string
 * @s: string to get length of
 * Return: length of s
 */
int _strlen(char *s)
{
	int length;

	for(length = 0; *s != '\0'; *s++)
	{
		length++;
	}
	return (length);
}
