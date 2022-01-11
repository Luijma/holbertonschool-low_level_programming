#include "main.h"
/**
 * _memset - function that fills memory with byte
 * @s: array to fill
 * @b: bit to fill with
 * @n: spots to fill
 * Return: returns pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
