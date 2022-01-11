#include "main.h"
/**
 * _strpbrk - searches string for set of bytes
 * @s: string to check
 * @accept: string to search for
 * Return: pointer to byte, null if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i] && *s != accept[i]; i++)
		{
		}
		if (*s == accept[i])
			return (s);
	}
	return (0);
}
