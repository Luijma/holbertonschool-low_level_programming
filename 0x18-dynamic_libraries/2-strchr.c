#include "main.h"
/**
 * _strchr - returns pointer to first occurence of c
 * @s: string to be checked
 * @c: character to search for
 * Return: returns pointer to s
 */
char *_strchr(char *s, char c)
{
	for (; *s && *s != c; s++)
	{
	}
	if (*s == c)
		return (s);
	return (0);
}
