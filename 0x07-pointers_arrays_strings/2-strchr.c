#include "holberton.h"
/**
 * _strchr - returns pointer to first occurence of c
 * @s: string to be checked
 * @c: character to search for
 * Return: returns pointer to s
 */
char *_strchr( char *s, char c)
{
	int i = 0;

	for (i = 0; *s && *s != c; i++)
	{
		s++;
	}
	return (s);
}
