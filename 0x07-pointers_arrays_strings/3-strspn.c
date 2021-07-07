#include "holberton.h"
/**
 * _strspn - returns length of initial match
 * @s: string to be checked
 * @accept: letters to check for
 * Return number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				r++;
		}
	}
	return (r);
}
