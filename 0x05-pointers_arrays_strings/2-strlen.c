#include "holberton.h"
/**
 * _strlen - function that calculates length of a string
 * @s: string to get length of
 * Return: length of s
 */
int _strlen(char *s)
{
	int l;
	
	for(l = 0; *s;)
	{
		l++;
		*s++;
	}
	return (length);
}
